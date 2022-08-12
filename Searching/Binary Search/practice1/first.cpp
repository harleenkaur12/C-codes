#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        if(arr[mid]<key){
            start=mid+1;
        }

        //start and end are changing we need to change our mid as well.
        mid=start+(end-start)/2; //can also be mid=(start+end)/2 but if we add the hoghedt values of int here we'll cross the range of int so we need to do this chalaaki


    }
    return -1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[6]={1,2,3,4,5,6};

    int evenIndex=binarySearch(arr,5,5);
    
    int oddIndex=binarySearch(brr,6,5);
     
    cout<<"The index of key 5 in arr is "<<evenIndex<<endl;
    
    cout<<"The index of key 5 in brr is "<<oddIndex<<endl;
    
    return 0;
}