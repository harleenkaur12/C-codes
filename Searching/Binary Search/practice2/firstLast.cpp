// #include<iostream>
// using namespace std;
// int firstOcc(int arr[], int n, int key){
//     int s=0,e=n-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;

//     while(s<=e){
//         if(arr[mid]==key){
//             ans=mid;
//             e=mid-1;

//         }
//         else if(key>arr[mid]){
//             s=mid+1;

//         }
//         else if(key<arr[mid]){
//             e=mid-1;  
             
//         }
//         mid=s+(e-s)/2;


//     }
//     return ans;
// }
// int main(){
//     int even[5]={1,2,3,4,5};
//     cout<<"The first occurence of 5 is "<<firstOcc(even,5,5)<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    
    return ans;
}
int main(){
    int even[5]={1,1,2,4,5};
    cout<<"The first occurence of 2 is "<<firstOcc(even,5,2);
    return 0;
}