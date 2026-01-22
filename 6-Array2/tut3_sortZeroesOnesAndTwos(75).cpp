#include <iostream>
#include <vector>
using namespace std;
void sort012(vector<int> &v)
{

    int low = 0;
    int mid = 0;
    int high = v.size() - 1;
    while (mid <= high)
    {
        if (v[mid] == 0)
        {
            if (v[low] != 0)
            {
                int temp = v[mid];
                v[mid] = v[low];
                v[low] = temp;
                low++;
            }
            else
            {
                mid++;
                low++;
            }
        }
        else if (v[mid] == 1)
        {
            mid++;
        }
        else if (v[mid] == 2)
        {
            if (v[high] == 2)
            {
                high--;
            }
            else
            {
                int temp = v[high];
                v[high] = v[mid];
                v[mid] = temp;
                high--;
            }
        }
    }
}
int main()
{
    int size;
    cout << "Enter size of array:";
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
    for (int i = 0; i < size; i++)
    {
        if (v[i] != 0 && v[i] != 1 && v[i] != 2)
        {
            cout << "Invalid input.";
            return 0;
        }
    }

    sort012(v);
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}
