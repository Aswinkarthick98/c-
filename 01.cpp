//electricity bill computation 

#include<iostream>
using namespace std;
int main() {
    float units, rate, amount;
    cout << "number of units consumed : ";
    cin >> units;
    if  (units <= 100) 
        {rate = 1.20;} 
    else if (units > 100 && units <= 200)
        {rate = 2.00;}
    else 
        rate = 3.00;
    amount = units * rate;
    cout << "\nThe total electricity bill is Rs."<<amount;
    return 0;
}
