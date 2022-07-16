#include<iostream>
using namespace std;
 enum colors{red=5,black=5}; //redundancy possible
 enum suit{heart, diamond=8, spade=3, club };
int main(){
    cout<<"The value of enum color: "<<red<<" "<<black<<endl;

    cout<<"enum suit default values"<<heart<<diamond<<spade<<club;
    
    return 0;
}