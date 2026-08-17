#include <iostream>
#include <vector>
using namespace std;

void mergev1v2(vector<int>& v1, vector<int>& v2, vector<int>& v3)
{
    // cout<<"Hellp";
    // for(int i = 0; i<v1.size();i++){
    //     cout<<v1[i]<<" ";
    // }
    int newSize;

    if (v1.size() < v2.size())
        newSize = v1.size();
    else
        newSize = v2.size();

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < v1.size() and j<v2.size())
    {
        if (v1[i] <= v2[j])
        {
            v3[k] = v1[i];
            i++;
            k++;
        }
        else
        {
            v3[k] = v2[j];
            j++;
            k++;
        }
    }
    while(i<v1.size()){
        v[k] = v[i];
        k++;
        i++;
    }
    while(j<v2.size()){
        v[k] = v[j];
        j++;
        k++;
    }

    // for(int i = 0; i<v1.size()+v2.size();i++){
    //     cout<<"hh";
    //     cout<<v1[i]<<" ";
    // }
}

int main()
{
    int size1;
    cout << "Enter size of 1st vector: ";
    cin >> size1;
    int size2;
    cout << "Enter size of 2nd vector: ";
    cin >> size2;

    vector<int> v1;
    cout << "Enter vector one elements: ";

    for (int i = 0; i < size1; i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
        // cin >> v1[i];
    }
    vector<int> v2;
    cout << "Enter second vector  elements: ";

    for (int i = 0; i < size2; i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
    vector<int> v3(v1.size()+v2.size());

    mergev1v2(v1, v2, v3);
    
    for(int i = 0; i<v1.size()+v2.size();i++){
        cout<<v3[i]<<" ";
    }
}