#include<iostream>
using namespace std;
int duplicateInt(int arr[], int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i]; //sbko apas me kra. jo duplicate the vo udd gaye.
    }
    for (int i = 0; i < n; i++)//elements in the array are from 1 to (n-1) and one of the elements is repeating.
    {
        ans=ans^i;     //if we again do the same thing as above. again the same thing will happen the element which is duplicate will get cancelled islie we do xor with the entire list of elements to jo bachega vo duplicate hoga. simple.
    
    }
    return ans;
    
}
int main(){
    int arr[5]={1,2,2,3,4};
    int x=duplicateInt(arr,5);
     cout<<x;

    return 0;
}