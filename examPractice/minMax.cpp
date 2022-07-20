#include<iostream>
using namespace std;

int main(){
    
    int arr[100];
    cout<<"Enter the size of the array ";
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }

    int max=arr[0];
    int min=arr[0];

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i]>max)
        {
            /* code */
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
        
    }
    cout<<"The maximum number is "<<max;
    cout<<"The minimum number is "<<min;

    
    

    return 0;
}