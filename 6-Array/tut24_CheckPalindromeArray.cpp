#include <iostream>
#include <vector>
using namespace std;

void checkPalindrome(vector<int> &v)
{
    int left = 0;
    int right = v.size() - 1;
    bool flag = true;
    while (left < right)
    {
        if (v[left] != v[right])
        {
            // return false;
            flag = false;
            cout << "Not palindrome.";
            break;
        }
        left++;
        right--;
    }
    // return true;
    if (flag)
    {
        cout << "Given array is palindrome.";
    }
}

int main()
{
    int size;
    cout << "Enter size of array:";
    cin >> size;
    if (size == 0)
    {
        cout << "Given array is palindrome.";
        return 0;
    }

    vector<int> v(size);
    cout << "Enter elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    checkPalindrome(v);

    // if (checkPalindrome(v))
    // {
    //     cout << "Given array is palindrome.";
    // }
    // else
    // {
    //     cout << "Not palindrome.";
    // }
}