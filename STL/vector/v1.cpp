#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"The capacity of this vector is "<<v.capacity()<<endl;
    
    v.push_back(10);
    cout<<"The capacity of this vector is "<<v.capacity()<<endl;

    v.push_back(20);
    cout<<"The capacity of this vector is "<<v.capacity()<<endl;

    v.push_back(30);
    cout<<"The capacity of this vector is "<<v.capacity()<<endl;//capacity tells the space alloted to the vector which doubles each time the vector gets full

    cout<<"The size of this vector is "<<v.size()<<endl; //tells the number of elements in the vector

    cout<<"Elements at first and last position are "<<v.front()<<" "<<v.back()<<endl;
    cout<<"Element at 2nd index is "<<v.at(2)<<endl;

    cout<<"Before pop"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    cout<<"After pop"<<endl;
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }











    return 0;
}