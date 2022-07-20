#include <iostream>
#include <math.h>
using namespace std;
 
//Function declartion
int convertBinaryToDecimal(long long n);
 
int main()
{
    long long n;
    cout<<"Enter a binary number: ";
    // Inputting number from user
    cin>>n;
    //Printing binary number to decimal
    cout<<n<<" in binary = "<<convertBinaryToDecimal(n)<<" in decimal";
    return 0;
}
 
//Function to convert binary number to decimal
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
