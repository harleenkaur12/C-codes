#include<iostream>
using namespace std;
struct product
{
    /* data */
    int w;
    float p;
};

int main(){
    int i=0;
    cout<<"How many products? ";
    cin>>i;
    const int productCount=i;
    product p0bj[productCount];


    
    for (int count = 0; count < productCount; count++)
    {
        /* code */
        cout<<"Enter the details(weight;price) for product number"<<count+1;
        //cin>>pObj[count].w;
       //cin>>pObj[count].p;

    }

    for (int count = 0; count < productCount; count++)
    {
        /* code */


    }
    
    
    
    return 0;
}