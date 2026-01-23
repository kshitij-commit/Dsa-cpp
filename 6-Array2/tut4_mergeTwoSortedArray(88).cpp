#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> &v1, vector<int> &v2)
{
    int size3 = v1.size() + v2.size();
    vector<int> v3(size3);
    int low = 0;
    int mid = 0;
    int high = 0;
    while (mid < size3)
    {
        if (v1.size() > low && v2.size() > high)
        {
            if (v1[low] <= v2[high])
            {
                v3[mid] = v1[low];
                low++;
                mid++;
            }
            else if (v1[low] > v2[high])
            {
                v3[mid] = v2[high];
                high++;
                mid++;
            }
        }

        else
        {
            if (v1.size() > low)
            {
                v3[mid] = v1[low];
                low++;
                mid++;
            }
            else
            {
                v3[mid] = v2[high];
                mid++;
                high++;
            }
        }
    }
    return v3;
}

int main()
{
    int size1;
    cout << "Enter size of first array:";
    cin >> size1;

    int size2;
    cout << "Enter size of 2nd array:";
    cin >> size2;
    

    vector<int> v1(size1);
    vector<int> v2(size2);
    if (size1 > 0)
    {
        cout << "Enter elements of 1st array:";
        for (int i = 0; i < size1; i++)
        {
            cin >> v1[i];
        }
    }
    if (size2 > 0)
    {
        cout << "Enter elements of 2nd array:";
        for (int i = 0; i < size2; i++)
        {
            cin >> v2[i];
        }
    }

    vector<int> v3 = merge(v1, v2);
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
}
