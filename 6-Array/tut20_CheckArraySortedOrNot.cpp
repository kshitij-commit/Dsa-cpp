#include <iostream>
#include <vector>
using namespace std;
bool check(vector<int> &v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int size;
    cout << "Enter size of array:";
    cin >> size;
    if(size==0){
        cout<<"Array is sorted.";
        return 0;
    }
    vector<int> v(size);
    cout << "Enter elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    if (check(v))
    {
        cout << "Array is sorted.";
    }
    else
    {
        cout << "Array is not sorted.";
    }
}