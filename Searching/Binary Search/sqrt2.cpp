#include<iostream>
using namespace std;
int binarySearch(int n){
    int start=0;
    int end=n;

    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<end){
        long long int square=mid*mid; //to avoid going out of range 
        if(square==n){
            return mid;
        }
        if(square<n){
            start=mid+1;
            mid=ans;

        }
        else{
            end=mid-1;
        }

        mid=start+(end-mid)/2;

    }
    return ans;
}
int main(){
    int n=36;
    cout<<"The square root of n is "<<binarySearch(n);
    return 0;
}