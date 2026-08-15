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
            int j = 0;
            int k = size - 1;
            while (j <= k )
            {
                if (v[j] == 0){
                    swap(v[i],v[j]);
                    i++;
                    j++;
                }
                else if (v[j] == 1)
                    j++;
                else 
                {
                    int temp = v[j];
                    v[j] = v[k];
                    v[k] = temp;
                    k--;
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