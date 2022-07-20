#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
       
        /* code */
       
        for (int j = 1; j <=n-i ; j++)
        {
            /* code */
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            /* code */
            cout<<j;
           
            
        
            
        }
        for (int j = 1; j<= i-1; j++) //here dont consider j as column instead take it as a value
        {
            cout<<i-j;
            
        }
        
        cout<<endl;
        
        
    }
    

    return 0;
}