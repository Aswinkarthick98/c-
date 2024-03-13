//code to find the smallest of 3 numbers

#include <iostream>
using namespace std;
int main() 
{
float a, b, c;
cin >> a >> b >> c;
if(a <= b && a <= c)
    cout << "smallest number: " << a;
else if (b <= a && b <= c)
    cout << "smallest number: " << b;
else  
    cout << "smallest number: " << c; 
return 0;
}

