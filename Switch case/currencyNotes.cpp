#include<iostream>
using namespace std;

//for finding total number of notes

int main(){
    int n;
    cin>>n;
    int count=0;
    while(n>0){   // in place of if else we can use switch statement and break;
        if(n>1000){
            count+=n/1000;
            n=n%1000;

        }
        else if (n>500)
        {
            count+=n/500;
            n=n%500;
        }
        else if(n>100){
            count+=n/100;

            n=n%100;
        }
        else
        {
            break;
        }
        
    }
    cout<<count<<endl;
    
    
    return 0;
}