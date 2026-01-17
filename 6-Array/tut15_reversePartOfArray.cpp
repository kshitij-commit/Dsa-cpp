#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
void reversePart(vector<int> v, int i, int j)
{
    while (i < j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    display(v);
}
int main()
{
    int size;
    cout << "Enter size fo array:";
    cin >> size;

    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    int start;
    cout << "Enter start index:";
    cin >> start;

    int end;
    cout << "Enter end index:";
    cin >> end;

    reversePart(v, start, end);
    
}