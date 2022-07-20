#include<iostream>
using namespace std;
int main(){
    char b[] = "xyz";
char *c = &b[0];
cout << c << endl;
cout<<b<<endl;
cout<<b[2]<<endl;

    return 0;
}