#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
   
}
int main(){
    int arr[5]={1,2,3,4,5};
    reverse(arr,5);
    for (int i = 0; i <5; i++)
    {
        /* code */
        cout<<arr[i];
    }
    return 0;
}