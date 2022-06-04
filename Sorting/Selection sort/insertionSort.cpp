#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(j>=0;j--;){ //0th element ko sorted maan lia 
                                 //ith index ko set rakhkar peeche ke sabse comapre karwado
            if (arr[j]>temp){
                //shift karenge
                 arr[j+1]=arr[j];
            }
            else{
                break;
            }
            arr[j+1]=temp;


        }
    }
}
int main(){
    int arr[5]={1,4,2,5,3};
    int n=5;
    sort(arr, 5);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    
    return 0;
}

/**int sort(int arr[],int n){
    

    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(j>=0;j--;){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            temp=arr[j+1];
        }



    }
}*/
