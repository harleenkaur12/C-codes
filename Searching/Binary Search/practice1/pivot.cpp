#include<iostream>
using namespace std;
//for a sorted array
int pivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){ 
            s=mid+1; //we need to reach the rightmost tip of above line

        }
        else{
            e=mid;  //we need to reach the leftmost tip of the below line
        }
        mid=s+(e-s)/2;
    }
return s;


}
int main(){
    int arr[5]={8,10,17,1,3};
    cout<<"Pivot is "<<pivot(arr,5);
    return 0;
}