// write a code to find the factorial of given number using class and object

#include <iostream>

using namespace std;
class Factorial 
{
public:
    int rfact(int num) 
    {
        int fact = 1;
        for (int i = 1; i <= num; i++) 
            {fact *= i;}
        return fact;
    }};
int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Factorial factorialObj;
    int result = factorialObj.rfact(num);
    cout << "The factorial of " << num << " is " << result ;
    return 0;
}