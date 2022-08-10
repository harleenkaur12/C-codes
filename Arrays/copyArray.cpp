#include<iostream>
using namespace std;
void copy(int arr[],int brr[], int n){
    for (int i = 0; i < n; i++)
    {
        brr[i]=arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<brr[i];
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5];
    cout<<"arr is ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
 cout<<endl;   
    
    cout<<"brr is ";
    copy(arr,brr,5);
    return 0;
}