//code to find the largest of 3 numbers

#include <iostream>
using namespace std;
int main() 
{
float a, b, c;
cin >> a >> b >> c;
if(a >= b && a >= c)
    cout << "Largest number: " << a;
else if (b >= a && b >= c)
    cout << "Largest number: " << b;
else  
    cout << "Largest number: " << c; 
return 0;
}

