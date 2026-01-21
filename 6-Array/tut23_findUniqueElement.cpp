#include <iostream>
#include <vector>
using namespace std;

void Unique(vector<int> &v)
{
    bool flag = false;
    for (int i = 0; i < v.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < v.size(); j++)
        {
            if (i != j)
            {
                if (v[i] == v[j])
                {
                    count++;
                    break;
                }
            }
        }
        if (count == 0)
        {
            flag = true;
            cout << "Unique element is: " << v[i];
            break;
        }
    }
    if (flag == false)
    {
        cout << "No unique element.";
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

    Unique(v);
}