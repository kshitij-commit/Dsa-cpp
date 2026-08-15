#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int size;
    cout << "Enter size of vector: ";
    cin >> size;

    if (size > 0)
    {

        cout << "Enter vector elements: ";

        for (int i = 0; i < size; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if (size > 1)
        {
            int i = 0;
            int j = size - 1;
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
                    j--;
                    i++;
                }
            }
        }

        for (int i = 0; i < size; i++)
        {
            cout << v[i] << " ";
        }
    }

    return 0;
}