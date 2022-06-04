#include<iostream>
using namespace std;
int sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
            swap(arr[minIndex],arr[j]);
        }
    }
   
   

}












int main(){
    int arr[]={2,4,3,6,8,10,1};

    sort(arr,7);
    int n=7;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    
    return 0;
}