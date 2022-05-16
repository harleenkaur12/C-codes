#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
        

    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[6]={1,2,3,4,5,6};
    printArray(arr,5);
    printArray(brr,6);

    reverse(arr,5);
    reverse(brr,6);

    printArray(arr,5);
    printArray(brr,6);


    return 0;
}