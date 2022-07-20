#include<iostream>
using namespace std;
int sum(int arr[]){
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        
        sum=sum+arr[i];

    }
    return sum;
    

}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<sum(arr);
    return 0;
}