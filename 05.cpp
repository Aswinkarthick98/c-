// write a code to convert decimal to binary 

#include <iostream>
#include <bitset>

using namespace std;
int main() 
{
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    bitset<4> binary(decimal);
    cout << "The binary equivalent is: " << binary.to_string();
    return 0;
}