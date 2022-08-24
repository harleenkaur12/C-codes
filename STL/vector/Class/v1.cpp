#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"Capacity of v is : "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity of v is : "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity of v is : "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity of v is : "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"Capacity of v is : "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"Capacity of v is : "<<v.capacity()<<endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }

    cout<<endl;

    // v.insert(v.begin()+2,4,100);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v.at(i)<<" ";
    // }
    // cout<<endl;

    v.insert(v.end(),4,100);
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    cout<<"Size of vector or the number of elements : ";
    cout<<v.size();
    return 0;
}