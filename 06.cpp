//code to find prime number 

#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout <<"enter a number to check for prime : \n";
    cin>>n;
    if (n <= 1) 
        {cout << n << " is not a prime number.\n";} 
    else
        {for(int i=2;i*i<=n;++i)
            {if(n % i == 0) 
                {cout << n << " is not a prime number.\n";
                break;}
            else
                cout << n << " is a prime number.\n";
                break;}
        }
    return 0;
};