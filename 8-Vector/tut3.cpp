// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v;

//     for(int i = 1; i <= 20; i++) {
//         v.push_back(i);
//         cout << "Pushed: " << i
//              << " | Size: " << v.size()
//              << " | Capacity: " << v.capacity() << endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v;
//     v.reserve(20);

//     for(int i = 1; i <= 20; i++) {
//         v.push_back(i);
//         cout << "Size: " << v.size()
//              << " | Capacity: " << v.capacity() << endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v;
//     v.reserve(5);
//     v.push_back(1);
//     cout << "Size: " << v.size() <<"| capacity:"<<v.capacity()<< endl;

//     // Uncomment ONE line at a time
//     // cout << v[0];
//     // v[0] = 10;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 3};

//     for(int i = 0; i < v.capacity(); i++)
//         cout << v[i] << " ";
//         cout<<endl;
//         cout<<"size:"<<v.size()<<" | capacity:"<<v.capacity()<<endl;

//         cout<<"after push_back:"<<endl;
//         v.push_back(30);
//         cout<<"size:"<<v.size()<<" | capacity:"<<v.capacity()<<endl;

        
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v;

//     for(int i = 0; i < 100; i++)
//         v.push_back(i);

//     cout << "Before clear -> Size: " << v.size()
//          << " Capacity: " << v.capacity() << endl;

//     v.clear();

//     cout << "After clear -> Size: " << v.size()
//          << " Capacity: " << v.capacity() << endl;

//     v.shrink_to_fit();

//     cout << "After shrink_to_fit -> Size: " << v.size()
//          << " Capacity: " << v.capacity() << endl;
// }


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.reserve(10);
    
    for(int i=0;i<11;i++){
        v.push_back(i);
    }
    cout<<"size:"<<v.size()<<" | capacity:"<<v.capacity()<<endl;
}
