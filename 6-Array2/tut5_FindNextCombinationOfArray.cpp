#include<iostream>
#include<vector>
using namespace std;

// suffix reverse (minimal change)
void sort(vector<int>& v, int pivt){
    int i = pivt + 1;
    int j = v.size() - 1;
    while(i < j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

void nextTerm(vector<int>& v){
    int pivt = -1;

    // find pivot
    for(int i = v.size() - 2; i >= 0; i--){
        if(v[i] < v[i+1]){
            pivt = i;
            break;
        }
    }

    // if no pivot → last permutation
    if(pivt == -1){
        sort(v, -1);   // reverse whole array
        return;
    }

    // find just greater element
    for(int i = v.size() - 1; i > pivt; i--){
        if(v[i] > v[pivt]){
            int temp = v[i];
            v[i] = v[pivt];
            v[pivt] = temp;
            break;
        }
    }

    // reverse suffix
    sort(v, pivt);
}

int main(){
    int size;
    cout<<"Enter Size of Array:";
    cin>>size;

    vector<int> v(size);
    cout<<"Enter elements:";
    for(int i = 0; i < size; i++){
        cin >> v[i];   // FIXED
    }

    nextTerm(v);

    for(int x : v){
        cout << x << " ";
    }
}
