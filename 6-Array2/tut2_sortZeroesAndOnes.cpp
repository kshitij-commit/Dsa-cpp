#include <iostream>
#include <vector>
using namespace std;

void sort01(vector<int> &v)
{
    int zeroes = 0;
    int ones = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            zeroes++;
        else
            ones++;
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        if (i < zeroes)
            v[i] = 0;
        else
            v[i] = 1;
    }
}
int main()
{
    int size;
    cout << "Enter size of array:";
    cin >> size;

    vector<int> v(size);
    cout << "Enter elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    sort01(v);
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}
