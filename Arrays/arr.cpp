#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements you want ";
    cin>>n;
    int arr[n];
    int sum;
    for (int i = 0; i < n; i++)
    {
        /* code */

        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum=sum+arr[i];
        
    }
    cout<<"The sum of the elements of the array is "<<sum;
    
    return 0;
}