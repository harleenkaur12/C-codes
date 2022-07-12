#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first=1;
    int second=2;
    cout<<first<<endl;
    cout<<second<<endl;
    

    for (int i = 1; i <= n; i++)
    {
        /* code */
        int third=first+second;
        cout<<third<<endl;
    
        swap(first,second);
        swap(second,third);



    }
    
    
    return 0;
}