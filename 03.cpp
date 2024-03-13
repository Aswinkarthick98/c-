// program to check weather the given user name is valid or not 

#include<iostream>
using namespace std;
int main()
{
    string a , b;
    cout<<"enter user name :";
    cin>>a;
    cout<<"reenter user name :";
    cin>>b;

    if(a==b)
    {
        cout<<"user name is valid";
    }
    else
    {
        cout<<"user name is invalid";
    }
    return 0;
}
