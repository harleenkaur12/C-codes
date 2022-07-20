#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //bill
    int tv, vcr, rc, cdplr, trec;
    int n1, n2, n3, n4, n5;
    tv=100;
    vcr=220;
    rc=35.20;
    cdplr=300;
    trec=150; //struct can be used to make the program

    cout<<setw(10)<<"How many tv's are sold";
    cin>>n1;

    cout<<setw(10)<<"How many vcr's are sold";
    cin>>n2;

    cout<<setw(10)<<"How many remote controlllers are sold";
    cin>>n3;

    cout<<setw(10)<<"How many CDs are sold";
    cin>>n4;

    cout<<"How many tape recorders are sold";
    cin>>n5;

    
    int t1=n1*tv;          //int tv, vcr, rc, cdplr, trec;
                           //int n1, n2, n3, n4, n5;
    int t2=n2*vcr;
    int t3=n3*rc;
    int t4=n4*cdplr;
    int t5=n5*trec;
    int subtotal=t1+t2+t3+t4+t5;

    int final=subtotal+(subtotal*8.25/100);

    cout<<setw(10)<<"Items"<<setw(10)<<"Qty"<<setw(10)<<"Price"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"VCR \t "<<endl;
    cout<<"Remote Control \t"<<endl;
    cout<<"CD Player \t "<<endl;
    cout<<"Tape Recorder \t"<<endl;





    return 0;
}