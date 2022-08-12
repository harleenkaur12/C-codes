#include<iostream>
using namespace std;
int firstOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1; //since we are checking leftmost we need to check the left side 

        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }

        mid=start+(end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans;
    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1; //since we are checking rightmost occurence, we need to check the right side. if there will be something it will be stored in ans

        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }

        mid=start+(end-start)/2;
    }
    return ans;




}



int main(){
    int even[13]={1,2,3,3,3,3,3,3,3,3,4,5,6};
    cout<<"The first occurence of 3 is "<<firstOcc(even,13,3)<<endl;
    
    cout<<"The last occurence of 3 is "<<lastOcc(even,13,3)<<endl;

    cout<<"The total number of occurences of 3 are "<<lastOcc(even,13,3)-firstOcc(even,13,3)+1;

    return 0;
}