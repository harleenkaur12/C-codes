#include<iostream>
using namespace std;
int firstOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;

    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;

    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arr[11]={1,2,2,2,2,2,2,2,2,3,3};
    cout<<"The first occurence of 2 in the array is "<<firstOcc(arr,11,2)<<endl;
    
    cout<<"The last occurence of 2 in the array is "<<lastOcc(arr,11,2)<<endl;

    cout<<"The total number of occurences of 2 are "<<lastOcc(arr,11,2)-firstOcc(arr,11,2)+1;
    return 0;
}