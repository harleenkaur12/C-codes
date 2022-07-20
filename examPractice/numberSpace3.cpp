#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1; //for these questions take count completely outside
    for (int i = 1; i <= n; i++)
    {
        
        /* code */
       
        for (int j = 1; j <=n-i+1 ; j++)
        {
            /* code */
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            /* code */
           
            cout<<count;
            count++;
            
        }
        cout<<endl;
        
        
    }
    

    return 0;
}