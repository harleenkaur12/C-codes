#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"Enter a number "<<endl;
    cin>>n;
    int originalNum;

    for (int i = 1; i<=n; i++)
    {
        /* code */
        originalNum=i;
        int digit=0;
        while(i>0){
            int rem=i%10;
            digit=digit+(rem*rem*rem);
            i=i/10;
        }
        if(digit==originalNum){
            cout<<originalNum;
        }
        

       
    }
    
    return 0;
}