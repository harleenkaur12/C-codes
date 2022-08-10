#include<iostream>
using namespace std;
int main(){
    
    
    int n;
    cout<<"Enter the number of elements ";
    cin>>n;
    int arr[n];
    int count;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The negative elements are "<<endl;

    for (int i = 0; i < n; i++)
    {
        /* code */

        if (arr[i]<0){
            cout<<arr[i];
            count++;
        }
    }
    cout<<"\nThe number of negative elements is "<<count;
    
    return 0;
}