#include<iostream>
using namespace std;
int sum(int arr[], int size){
    int count=0;
    for (int  i = 0; i < size; i++)
    {
        count=count+arr[i];
        
    }
    cout<<"The sum of all the elements in the array "<<count;
    
}
int main(){
    int size;
    
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements in your array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sum(arr,size);
    
    return 0;
}