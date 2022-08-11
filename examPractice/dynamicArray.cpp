#include<iostream>
using namespace std;
int main(){
    
    int *arr=new int [5]; //datatype on the right
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
     for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<arr[i];
    }
    

    return 0;
}