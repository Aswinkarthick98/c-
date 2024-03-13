// develop a program using function to calculate simple interest
// suppose the customer is senior citizen he is offered 12 percent 
// rate of interest for all other the rate of interest is 10 percent.

#include <iostream>
using namespace std;
int main()
{
    int p, t, r;
    string sc ;
    cout << "Enter Principal amount: ";
    cin >> p;
    cout << "\nEnter Time period :";
    cin >> t;
    cout << "are you a senior citizen :";
    cin >> sc;
    if (sc == "yes" || sc == "Yes" || sc == "y" || sc == "Y") 
        {r = 12;} 
    else 
        {r = 10;}
    float si = p * t * r / 100;
    cout << "\nSimple Interest = Rs."<<si;
    return 0;
}