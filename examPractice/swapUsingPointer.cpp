#include<iostream>
using namespace std;
void swapNo(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;


}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    swapNo(&a,&b);
    cout<<a<<b;

    return 0;
}