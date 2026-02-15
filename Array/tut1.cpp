#include<iostream>
using namespace std;

// Array-1:
        // fixed sized sequence collection of elements of same data type.
        // int take 4 bytes of memory.
        // Array is stored in contiguous memory locations.


// int avg(int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         int x;
        
//         cin>>x;
//         sum+=x;

//     }
//     return sum/n;

// }

// int main(){
//     int n;
//     cout<<"Enter number of elements: ";
//     cin>>n;
//     int res=avg(n);
//     cout<<res;

//     // variance = sum of (xi - mean)^2 / n

// }

// int main(){
//     int arr[5]={1,2,3,4,5}; // declaration + initialization 
//     int arr1[5]={1,2}; // rest elements will be initialized to 0
//     int arr2[5]; // declaration only, elements will have garbage values
//     cout<<arr<<endl; // prints base address of array, that is address of arr[0]
//     cout<<arr+1<<endl; // address of arr[1], address increases by 4 bytes as int takes 4 bytes
//     cout<<&arr[0]<<endl; // address of arr[0]
//     cout<<&arr[1]<<endl; // address of arr[1]

// }


// int main(){
//     int n;
//     cout<<"Enter number of elements: ";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter element :";
//     for(int i=0;i<n;i++){
        
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// ***************** Find minimum and maximum element in an array ****************
                // void min_maxInArray(int n, int arr[]){
                //     // int min=arr[0];
                //     int max=arr[0];
                //     int min=arr[0];
                //     for(int i=0;i<n;i++){
                //         if(arr[i]>max){
                //             max=arr[i];
                //         }else if(arr[i]<min){
                //             min=arr[i];
                //         }
                //     }
                //     cout<<"Minimum element is:"<<min<<" "<<"Maximum element is:"<<max;


                // }
                // int main(){
                //     int n;
                //     cout<<"Enter number of elements: ";
                //     cin>>n;
                //     int arr[n];
                //     cout<<"Enter elements :";
                //     for(int i=0;i<n;i++){  // example input 5 3 8 1 4, or -2 -6 -1 -9 or all same elements 2 2 2 2
                        
                //         cin>>arr[i];
                //     }
                //     min_maxInArray(n,arr);

                    
                // }


//****************************** Reverse an array ******************************
    //  by printing in reverse order using loop

                void reverse (int arr[], int size){
                    for(int i=size-1;i>=0;i--){
                        cout<<arr[i]<<" ";
                    }

                }
                void reverseSWap(int arr[], int size){
                    int start=0;
                    int end=size-1;
                    int arr1[size];
                    for(int i=0;i<=size;i++){
                        arr1[end]=arr[i];
                        end--;
                    }
                    for(int i=0;i<size;i++){
                        cout<<arr1[i]<<" ";
                    }
                }
                int main(){
                    int n;
                    cout<<"Enter number of elements: ";
                    cin>>n;
                    int arr[n];
                    cout<<"Enter elements :";
                    for(int i=0;i<n;i++){  
                            
                        cin>>arr[i];
                    }

                    reverseSWap(arr, n);

                    
                }
    //  by swapping elements


