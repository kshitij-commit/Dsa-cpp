$ErrorActionPreference = 'Stop'

$scriptDirectory = Split-Path -Parent $MyInvocation.MyCommand.Path
$pushScript = Join-Path $scriptDirectory 'scheduler.ps1'
$taskUser = "$env:USERDOMAIN\$env:USERNAME"

$taskDefinitions = @(
    @{ Name = 'DSA-Daily-Push-1'; Time = '9:00AM' },
    @{ Name = 'DSA-Daily-Push-2'; Time = '3:00PM' },
    @{ Name = 'DSA-Daily-Push-3'; Time = '9:00PM' }
)

foreach ($taskDefinition in $taskDefinitions) {
    $taskName = $taskDefinition.Name
    $existingTask = Get-ScheduledTask -TaskName $taskName -ErrorAction SilentlyContinue
    if ($existingTask) {
        Unregister-ScheduledTask -TaskName $taskName -Confirm:$false
    }

    $action = New-ScheduledTaskAction -Execute 'powershell.exe' -Argument "-NoProfile -ExecutionPolicy Bypass -File `"$pushScript`""
    $trigger = New-ScheduledTaskTrigger -Daily -At $taskDefinition.Time
    $principal = New-ScheduledTaskPrincipal -UserId $taskUser -LogonType Interactive -RunLevel Limited
    $settings = New-ScheduledTaskSettingsSet -StartWhenAvailable -MultipleInstances IgnoreNew

    Register-ScheduledTask -TaskName $taskName -Action $action -Trigger $trigger -Principal $principal -Settings $settings -Description 'Push one pending DSA commit to GitHub.' -Force | Out-Null

    Write-Host "Registered $taskName at $($taskDefinition.Time)"
}

Write-Host 'Daily push schedule ready.'
