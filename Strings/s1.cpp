#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    // default constructor
    string v2("Hello");
    // copy constructor
    string v3(v2);
    cout << v3 << endl;
    // string overloading with length and first value to be initialised
    string v4(4, 'A');
    cout << v4 << endl;
    // concatenation
    string v5 = v2 + v2;
    cout << v5 << endl;

    // cout<<"Enter a value ";
    // string value;
    // cin>>value;
    // cout<<value<<endl; //prints untill it encounters an empty spacem

    cout << "Enter a value ";
    string value2;
    getline(cin, value2);
    cout << value2 << endl;
    cout << value2.at(8) << endl;
    // copy constructor
    string value3(value2);
    cout << value3 << endl;

    return 0;
}