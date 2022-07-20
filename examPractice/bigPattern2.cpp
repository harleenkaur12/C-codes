#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
       
        /* code */
       
        for (int j = 1; j <=n-i+1 ; j++)
        {
            /* code */
            cout<<j;
        }
        for (int j = 1; j <= i-1; j++)
        {
            /* code */
            cout<<"*";
           
            
        
            
        }
        for (int j = 1; j<= i-1; j++) //here dont consider j as column instead take it as a value
        {
            cout<<"*";
            
        }
        for (int j = 1; j <= n-i+1; j++)
        {
            /* code */
            int x=n-j-i+2;
            cout<<x;
            x--;

        }
        
        
        cout<<endl;
        
        
    }
    

    return 0;
}