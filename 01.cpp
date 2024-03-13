// write a cpp code to swap two variable without temp variable

#include<iostream>
using namespace std;

int main() 
{
    int a = 5, b = 10;
    cout << "Before Swap:\n";
    cout << "a = " << a << "\nb = " << b;
    a = a+b;
    b= a-b;
    a = a-b;
    cout << "\nAfter Swap:\n";
    cout << "a = " << a << "\nb = " << b;
    return 0;   
}
