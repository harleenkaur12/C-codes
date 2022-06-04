#include<iostream>
using namespace std;
int binarySearch(int n){
    int s=0;
    int e=n; //we are not talking about an array 
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        int square=mid*mid;
        if(square==n){
          
            return mid;
        }
        if(square>n){
            e=mid-1;

        }
        if(square<n){
            s=mid+1;
            ans=mid;
            
        }
        int mid=s+(e-s)/2;

        


    }
    return ans;

}
int main(){
    int n=4;
    cout<<"The square root of n is "<<binarySearch(n);
    
    return 0;
}