#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    int ans1=INT_MAX;
    int ans2=INT_MIN;

    for (int i = 0; i < size; i++)
    {
        //max
        if(arr[i]>ans2){
            ans2=arr[i];
        }
        if(arr[i]<ans1){
            ans1=arr[i];
        }
    }
    cout<<"Maximum value is"<<ans2<<endl;
    cout<<"Minimum value is"<<ans1<<endl;
    return 0;
}