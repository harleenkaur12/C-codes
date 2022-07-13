#include<iostream>
using namespace std;
int main(){
    char ch[6]="abcde";
    char *c = &ch[0];
    cout<<c;//pointer of characters is different from the pointer of arrays
    cout<<ch<<endl;
    
    return 0;
}