// display the address of the each elements of array

#include <iostream>
using namespace std;
int main() 
{
    int n,arr[n];
    cout << "Enter number of element in array : ";
    cin >> n;
    for(int i =0;i<n;i++)
        {cout<< "enter element at index"<<i+1<<":";
         cin>> arr[i] ;}

    for (int i=0 ;i<n; i++) 
        {cout << "\nAddress of element at index "<< i << ": " << &arr[i];}
}

