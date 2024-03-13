// build a program to reverse a numebr using loop

#include <iostream>
using namespace std;

int main() 
{
  int n, r = 0, rem;

  cout << "Enter an integer: ";
  cin >> n;

  while (n != 0) 
  {
    rem = n % 10;
    r = r * 10 + rem;
    n /= 10;
  }

  cout << "Reversed number: " << r ;

}