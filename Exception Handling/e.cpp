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
    cout<<result;
    }
    catch(char x){
        cout<<"divide by zero";
    }
    catch(int x){
        cout<<"int";
    }
    catch(...){
        cout<<"Unhandled Exception";
    }
    
    return 0;
}