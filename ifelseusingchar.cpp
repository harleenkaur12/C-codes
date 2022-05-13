#include <iostream>
using namespace std;

int main() {

    char a; cin >> a;

    if (a >= 'a' && a <='z'){
        cout << "it is lowercase" << endl;
    }
    else if(a >= 'A' && a <= 'Z'){
        cout << "it is uppercase" << endl;
    }
    else if (a>='0' && a<='9'){
        cout << "it is a number" << endl;
    }
    else{
        cout << "invalid input" << endl;
    }

    return 0;
}
