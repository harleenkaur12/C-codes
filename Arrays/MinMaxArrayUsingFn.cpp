#include<iostream>
using namespace std;
void max_min(int arr[], int size){
    int ans1=INT_MAX;//agar max nikalna h to min ki help lenge
    int ans2=INT_MIN;//agar max nikalna h to min ki help lenge
    for(int i=0;i<size;i++){
        if(arr[i]<ans1)
        {
            ans1=arr[i];


        }
        if(arr[i]>ans2){
            ans2=arr[i];

        }
    }
    cout<<"The minimum value is "<<ans1<<endl;
    cout<<"The maximum value is "<<ans2<<endl;
}
int main(){
    int size;
    cout<<"Enter the size of your array"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>> arr[i];
    }
    max_min(arr,size);

    return 0;
}