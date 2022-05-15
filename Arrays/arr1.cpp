#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<arr<<endl;//prints the base address
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
    //initialising all values as 0
    int all[6]={0};
    for(int i;i<6;i++){
    cout<<all[i]<<" ";
    }

    return 0;
}