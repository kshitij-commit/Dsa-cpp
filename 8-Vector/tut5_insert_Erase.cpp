#include <iostream>
#include <vector>
using namespace std;

// ******** Insert ***************
// int main()
// {
//     vector<int> v = {1, 2, 4};
//     v.insert(v.begin() + 2, 3);
//     for (int i : v)
//     {
//         cout << i << " ";
//     }
// }
// ********* Erase *****************
// int main()
// {
//     // vector<int>v={1,2,3,4,5};
//     // v.erase(v.begin()+1);
//     // for (int i : v)
//     // {
//     //     cout << i << " ";
//     // }
//     // cout<<endl;

//     // // ******** Erase a range *************
//     // v.erase(v.begin()+1,v.begin()+3);
//     // for (int i : v)
//     // {
//     //     cout << i << " ";
//     // }
//     cout << endl;
// }
int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    for (auto it = v1.begin(); it != v1.end();)
    {
        if (*it % 2 == 0)
        {
            it=v1.erase(it);
            // cout<<*it<<" ";
        }
        else
        {
            it++;
        }
    }
    for (int i : v1)
    {
        cout << i << " ";
    }
}
