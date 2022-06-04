#include<iostream>
using namespace std;
int sort(int arr[],int n){
    //bool swapped=false;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){//since largest element is now at its correct position j<n-i-1 /j<n-1 also works.
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                 //bool swapped=true;
            }
        }
        //if(swapped=false){//reduced time complexity to o(n) 
           // break;
        }
    }


int main(){
    int arr[]={1,3,4,7,9,5};
   
    sort(arr,6);
   
    cout<<"The sorted array is ";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}