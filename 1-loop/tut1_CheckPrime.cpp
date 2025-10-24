// write a program to check if a number is prime or not

#include <iostream>
using namespace std;
#include<cmath>

int main()
{
    int num;
    cout << "enter a number:";
    cin >> num;
    bool flag = true;
    if (num == 1)
    {
        cout << "Not prime";
        return 0;
    }
    else if (num == 2)
    {
        cout << num<<"is prime";
        return 0;
    }
    else
    {
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << num << " is prime.";
        }
        else
        {
            cout << "not prime.";
        }
    }
}