#include<iostream>
using namespace std;
class hero{
    private:
    int a=10;

    void print(){
        cout<<a<<endl;
    }
};
int main(){
    cout<<sizeof(hero);
    
    return 0;
}