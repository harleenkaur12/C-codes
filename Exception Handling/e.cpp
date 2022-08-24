#include<iostream>
using namespace std;
int main(){
    int a,b,result;
    cin>>a>>b;
    try{
        if(b==0){
        throw b;//raise exception
    }
    else{
        result=a/b;
    }
    result=a/b;
    cout<<result;
    }
    catch(int x){
        cout<<"divide by zero";
    }
    
    return 0;
}