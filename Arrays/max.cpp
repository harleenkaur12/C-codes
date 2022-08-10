#include<iostream>
using namespace std;
int findMax(int arr[5]){
    int max=INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
    
}
int findMin(int arr[5]){
    int min=INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
    
}
int main(){
    int arr[5];
    
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
    cout<<"The maximum element is "<<findMax(arr)<<endl;
    cout<<"The minimum element is "<<findMin(arr)<<endl;

    return 0;
}