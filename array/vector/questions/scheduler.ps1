$ErrorActionPreference = 'Stop'

function Invoke-Git {
    param(
        [Parameter(Mandatory = $true)]
        [string[]] $Arguments
    )

    & git @Arguments
    if ($LASTEXITCODE -ne 0) {
        throw "Git command failed: git $($Arguments -join ' ')"
    }
}

Set-Location $PSScriptRoot
$scriptRoot = (git rev-parse --show-toplevel).Trim()
Set-Location $scriptRoot

Invoke-Git -Arguments @('fetch', 'origin', '--prune')

$currentBranch = (git branch --show-current).Trim()
if ([string]::IsNullOrWhiteSpace($currentBranch)) {
    throw 'Run this script from a named branch.'
}

$pendingCommits = @(git rev-list --reverse "origin/$currentBranch..HEAD")
if ($pendingCommits.Count -eq 0) {
    Write-Host "No commits left to push on $currentBranch."
    exit 0
}

$nextCommit = $pendingCommits[0].Trim()
$commitMessage = (git log -1 --format=%s $nextCommit).Trim()

Write-Host "Pushing $nextCommit to origin/$currentBranch"
Write-Host "Commit: $commitMessage"

Invoke-Git -Arguments @('push', 'origin', "$($nextCommit):refs/heads/$currentBranch")

Write-Host "Success"
