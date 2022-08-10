#include<iostream>
using namespace std;
void destination(int src, int dest){
    //base case
    if(src==dest){
        cout<<"Phoch gaya";
        return ;
    }
    //processing
    src++;
    //rr
    destination(src, dest);
}
int main(){
    int src=1;
    int dest=10;
    destination(src,dest);

    return 0;
}