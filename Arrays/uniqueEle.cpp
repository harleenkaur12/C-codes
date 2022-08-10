#include<iostream>
using namespace std;
void unique(int arr[],int n){
    int count;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int count=0;
        for (int j = 0; j < n; j++)
        {
            /* code */
            if(arr[i]==arr[j]){
                count++; //agar ek hi bar aa rha h to count 1 hi hoga nahi to 2, 3, 4 kuch bhi ho skta h
            }
        }
        if(count==1){
            cout<<arr[i];
        }
    }
    
}
int main(){
    int arr[6]={1,2,3,4,4,5};
    unique(arr,6);
    return 0;
}