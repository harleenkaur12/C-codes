#include<iostream>
using namespace std;
int peakIndex(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    
    while(start<end){
    if(arr[mid]<arr[mid+1]){
        start=mid+1;
    }
    else{
        end=mid;
    }
   mid=start+(end-start)/2;
    }
    return start;
}
int main(){
    int arr[5]={1,2,3,2,1};
    int peak=peakIndex(arr,5);
    cout<<"The peak index of the mountain array is "<<peak;

    return 0;
}