//factorial of a given number 

#include<iostream>
using namespace std;
int main() {
    int num =1,mul ;
    cout << "Enter a number: ";
    cin >> mul;
    
    if (mul<= 0) {
        cout << "Invalid input! Please enter a positive integer.";
    } else {
        for(int i = 1; i <= mul; ++i) {
             num = num * i ;
        }
        cout << num ;
    }
    
}

