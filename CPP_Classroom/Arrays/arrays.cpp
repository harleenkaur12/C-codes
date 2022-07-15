#include<iostream>
using namespace std;
int main(){
    //int foo[5];
    int input=0;
    cout<<"How many elements do you want to add?";
    cin>>input;
    const int val=input;
    double foo[val]; 

    for (int i = 0; i < val; i++)
    {
        /* code */
        cin>>foo[i];
        

    }
       for (int i = 0; i < val; i++)
    {
        /* code */
        cout<<foo[i]<<" ";
        

    }
    int del;
    cout<<"Enter the value to be deleted";
    cin>>del;
    int pos=-1;
    for (int i = pos; i < val; i++)
    {
        /* code */
        if(foo[i]==del){
            pos=i;
            break;
            
        }
    }
    if(pos==-1){
        cout<<"not found"<<endl;
    }
    else{
        for (int i = pos; i < val; i++)
        {
            /* code */
            foo[i]=foo[i+1];
        }
        foo[val-1]=-1;
        
    }
    for (int i = 0; i < val; i++)
    {
        /* code */
        cout<<foo[i]<<" ";
        

    }

    return 0;
}