#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,5,6};
    cout<<arr[0]<<endl;     //this prints a value
    cout<<&arr[4]<<endl;   //this prints the address at the given index
    cout<<arr<<endl;        //this prints the address at the 0th index
    //this means that arr is a pointer in itself. let's try dereferencing it
    cout<<*arr<<endl; //prints the value at the 0th location only
    cout<<"-----"<<endl;
    cout<<*arr+1<<endl;
    cout<<arr+1;
    cout<<"------DEREFERENCING------"<<endl;
    cout<<*arr<<endl;//prints value at 0
    cout<<*arr+1<<endl;//must print 2
    cout<<*(arr+1);
    cout<<*(arr)+1<<endl; //line 15 and line 17 are exactly the same
    cout<<2[arr];//this is valid too
    
    
    return 0;
}