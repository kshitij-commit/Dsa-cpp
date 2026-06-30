

// Minimum number of operations required to make the product of all array elements equal to 1.

/*
------------------------------------------------------------
Problem: Minimum Steps to Make Product Equal to One

Statement:
You are given an array of integers. In one operation, you can
increase or decrease any array element by 1.

Find the minimum number of operations required so that the
product of all elements in the array becomes exactly 1.

Input:
- First line contains an integer n (size of array).
- Second line contains n integers.

Output:
- Print the minimum number of operations required.

Example:
Input:
3
-1 -2 -3

Output:
5

Explanation:
-2 -> -1 (1 operation)
-3 -> -1 (2 operations)
-1 -> 1  (2 operations)

Total = 5 operations.
------------------------------------------------------------
*/

#include<iostream>
using namespace std;

int main(){

    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];

    cout<<"Enter array elements: ";

    for(int i = 0;i < size;i++){
        cin>>arr[i];
    }
    int steps = 0;
    int prod = 1;
    int negCount = 0;
    int zeroCount = 0;
    for(int i = 0;i < size;i++){
        if(arr[i] > 0){
            steps +=arr[i]-1;
            
        }else if (arr[i] < 0){
            negCount++;
            steps += ((-arr[i])-1);
            

        }else {
               // 0 can become either 1 or -1 in one step
             steps += 1;
            zeroCount++;
        }
    }
    // If negatives are odd and there is no zero,
    // one -1 must be converted to 1 (cost = 2)
    if(negCount %2 == 1 && zeroCount == 0){
        steps += 2;
    }

    
    cout<<steps;

}