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
        else{//either it is the peak element or an element on the right slant line
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return arr[end]; //return start; since at a time end==start and we come out of the while loop it is the time when we are at the peak element
}
int main(){
    int arr[6]={1,2,3,4,2,1};
    cout<<"The value at the peak index of the array is "<<peakIndex(arr,6);
    return 0;
}