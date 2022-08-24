#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4); 
    first.push_back(5);
    for (int i = 0; i < first.size(); i++)
    {
        cout<<first.at(i)<<" ";
    }
    cout<<endl;
    vector<int>second(first);
    second.push_back(6);
    second.push_back(7);
    second.push_back(8);
    second.push_back(9);
    for (int i = 0; i < second.size(); i++)
    {
        cout<<second.at(i)<<" ";
    }
    cout<<endl;
    vector<int>third(second);
    third.push_back(10);
    third.push_back(11);
    third.push_back(12);
    for (int i = 0; i < third.size(); i++)
    {
        cout<<third.at(i)<<" ";
    }
    cout<<endl;
    vector<int>fourth(5);
    cout<<fourth.size();
    for (int i = 0; i <12; i++)
    {
        if(first.at(i)==second.at(i)){

        }
    
    }
    

    return 0;
}