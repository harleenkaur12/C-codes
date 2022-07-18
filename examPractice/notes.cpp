#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the amount"<<endl;
    int a;
    cin>>a;
    int note1, note2, note3, note4, note5;

    if(a>=2000){
        note1=a/2000;
        a=a-note1*2000;
    }
    if(a>=500){
        note2=a/500;
        a=a-note2*500;
    }
    if(a>=100){
        note3=a/100;
        a=a-note3*100;
    }
    if (a>=10)
    {
        /* code */
        note4=a/10;
        a=a-note4*10;
    }
    if (a<=9)
    {
        /* code */
        note5=a;
    }
    
    

    cout<<"No. of 2000 rupees notes is "<<note1<<endl;
    cout<<"No. of 500 rupees notes is "<<note2<<endl;
    cout<<"No. of 100 rupees notes is "<<note3<<endl;
    cout<<"No. of 10 rupees notes is "<<note4<<endl;
    cout<<"No. of 1 rupees notes is "<<note5<<endl;
    cout<<"The total number of notes is "<<note1+note2+note3+note4+note5;




    return 0;
}