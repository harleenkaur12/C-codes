#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=n; 
    int temp=n;
    while(n>0){
        count=temp;
        while(count>0){
            for (int i = 0; i < n; i++)
            {
                /* code */
                cout<<count<<" ";
            }

            count--;
            
        }
        cout<<"$";
        n--;
    }
    return 0;
}