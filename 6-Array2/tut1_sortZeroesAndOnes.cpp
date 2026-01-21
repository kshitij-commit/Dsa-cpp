#include <iostream>
#include <vector>
using namespace std;
// void sort(vector<int> &v)
// {
//     int i = 0;
//     int j = v.size() - 1;
//     while (i < j)
//     {

//         if (v[i] == v[j])
//         {
//             if (v[i] == 0 && v[j] == 0)
//             {
//                 i++;
//             }
//             else
//             {
//                 j--;
//             }
//         }
//         else if (v[i] == 0 && v[j] == 1)
//         {
//             i++;
//             j--;
//         }
//         else
//         {
//             int temp = v[i];
//             v[i] = v[j];
//             v[j] = temp;
//             i++;
//             j--;
//         }
//     }
// }

void sort01(vector<int> &v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        if (v[i] == 0)
            i++;
        else if (v[j] == 1)
            j--;
        else
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }
}
int main()
{
    int size;
    cout << "Enter Size of array:";
    cin >> size;
    if (size == 0)
    {
        return 0;
    }

    vector<int> v(size);
    cout << "Enter elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    if (size == 1)
    {
        cout << v[0];
        return 0;
    }
    sort01(v);
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}