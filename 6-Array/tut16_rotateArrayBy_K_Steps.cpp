#include <iostream>
#include <vector>
using namespace std;
// void reverseLeft(vector<int> &v, int left, int right)
// {

//     while (left < right)
//     {
//         int temp = v[left];
//         v[left] = v[right];
//         v[right] = temp;
//         left++;
//         right--;
//     }
// }
// void reverseRight(vector<int> &v, int left, int right)
// {

//     while (left < right)
//     {
//         int temp = v[left];
//         v[left] = v[right];
//         v[right] = temp;
//         left++;
//         right--;
//     }
// }
void reverse(vector<int> &v, int left, int right)
{

    while (left < right)
    {
        int temp = v[left];
        v[left] = v[right];
        v[right] = temp;
        left++;
        right--;
    }
}
int main()
{
    int size;
    cout << "Enter size fo array:";
    cin >> size;

    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    if (size == 0)
    {
        return 0;
    }
    else
    {
        int k;
        cout << "Enter value of k:";
        cin >> k;
        k = k % size;
        reverse(v, 0, size - 1);
        reverse(v, 0, k - 1);
        reverse(v, k, size - 1);
        for (int i = 0; i < size; i++)
        {
            cout << v[i] << " ";
        }
    }
}