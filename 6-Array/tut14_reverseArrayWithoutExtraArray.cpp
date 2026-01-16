#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v)
{

    int left = 0;
    int right = v.size() - 1;
    for (int i = 0; i < (v.size() / 2); i++)
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
    cout << "Enter size of array:";
    cin >> size;

    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    reverse(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}