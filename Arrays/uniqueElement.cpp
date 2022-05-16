#include<iostream>
using namespace std;
int findUnique(int arr[],int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans=ans^arr[i];  //sabka apas me xor krna h. so ans ki value update hoti ja rhi hogi, finally jo bachega vo print hojaega.
    }
    return ans;
    
}
int main(){
    int arr[5]={1,2,1,3,2};
    int x=findUnique(arr,5);
    cout<<"The unique element is "<<x;
    
    return 0;
}