#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);

    for (int i = 0; i < d.size(); i++)
    {
        
        cout<<d.at(i)<<" ";


    }cout<<endl;

    /**d.pop_front();
    for (int i = 0; i < d.size(); i++)
    {
        
        cout<<d.at(i)<<" ";


    }cout<<endl;
    */
    cout<<"Before erase "<<d.size();
    d.erase(d.begin(),d.begin()+1);
     for (int i = 0; i < d.size(); i++)
    {
        
        cout<<"After erase "<<d.size();


    }cout<<endl;



    
    return 0;
}