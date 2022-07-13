#include<iostream>
using namespace std;
void output(int start){
    if(start==0){
        return;
    }
    
    output(start-1);
    cout<<start<<endl;
}

int main(){
     output(5);
    
    return 0;
}
   
