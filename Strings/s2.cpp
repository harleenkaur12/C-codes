#include<iostream>
#include<string>
using namespace std;
int main(){
    string val="Hello";
    string val4="Programming";
    cout<<*val4.begin()<<endl;
    cout<<val4.append(val)<<endl;
    cout<<*val4.rbegin()<<endl;
    cout<<val4.size()<<endl;
    cout<<val4.empty()<<endl;
    cout<<val4.front()<<endl;
    cout<<val4.back()<<endl;
    val4.push_back('a');
    cout<<val4;
    return 0;
}