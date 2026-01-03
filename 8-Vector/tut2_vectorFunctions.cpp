#include<iostream>
#include<vector>
using namespace std;

//  vector fucntions are:-
        // 1)size
        // 2)push_back
        // 3)pop_back
        // 4)front
        // 5)back
        // 6)at

        //capacity() -> capacity will double every time 

int main(){
    // size()
        // vector<char> vec1={'a','b','c','d'};
        //     cout<<"size:"<<vec1.size();
    // push_back
        vector<int> vec2;
        cout<<"size before push:"<<vec2.size()<<endl;
        vec2.push_back(25);
        vec2.push_back(50);
        vec2.push_back(75);
        cout<<"size after push:"<<vec2.size()<<endl;
        for(int i: vec2){
            cout<<i<<endl;
        }
        cout<<endl;
    // pop_back
        cout<<"after pop_back:"<<endl;
        vec2.pop_back();
        for(int i: vec2){
                cout<<i<<endl;
            }
        cout<<"after pop_back size:"<<vec2.size()<<endl;
    //front
        cout<<"front element is: "<<vec2.front()<<endl;
    // at
        cout<<vec2.at(1)<<endl;
    
    // capacity
        cout<<"capacity of vec2:"<<vec2.capacity()<<endl;
        cout<<"size of vec2 is:"<<vec2.size()<<endl;
}