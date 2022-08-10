#include<iostream>
using namespace std;
int main(){
    int arr[100], frequency[100];
    int i,j,count,num;

    cout<<"Enter size of array: ";
    cin>>num;

    cout<<"Enter elements in array: ";
    for (int i = 0; i < num; i++)
    {
        //take input
        cin>>arr[i];
        //initially initialise frequency variable to -1
        frequency[i]=-1;
    }

    for (int i = 0; i < num; i++)
    {
        count=1;
        for (j=i+1; j < num; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                frequency[j]=0;
            }
        }
        if (frequency[i]!=0)
        {
            /* code */
            cout<<arr[i]<<" occurs "<<frequency[i]<<" times ";
        }
    }
   return 0;
}