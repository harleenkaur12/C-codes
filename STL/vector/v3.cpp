#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5,1);
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v.at(i)<<" ";
    }
    
    return 0;
}