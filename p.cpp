#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class book{
    public:
    string author;
    string title;
    float price;
    string publisher;
    int stock_position;
    int copies;
    void getdata();
    void setdata();
    void checkdata();
};
void book::getdata(){
    cout<<"Enter the name of the author:"<<endl;
    cin>>author;
    cout<<"Enter the title of the book:"<<endl;
    cin>>title;
    cout<<"publisher of the book:"<<endl;
    cin>>publisher;
    cout<<"enter the price of the book:"<<endl;
    cin>>price;
    cout<<"Enter the no of copies of the book:"<<endl;
    cin>>copies;
}
void book::setdata(){
    cout<<"author: "<<author<<endl;
    cout<<"title: "<<title<<endl;
    cout<<"price: "<<price<<endl;
    cout<<"publisher: "<<publisher<<endl;
    cout<<"copies: "<<copies<<endl;
}
void book::checkdata(){
    string a, t;
    int c;
    cout<<"book to be searched:"<<endl;
    cout<<"author: "<<endl;
    cin>>a;
    cout<<"Title: "<<endl;
    cin>>t;
    if(a!=author || t!=title){
        cout<<"Book is not availaible"<<endl;
    }
    else{
        cout<<"Book is availaible"<<endl;
        cout<<"title of the book: "<<t<<endl;
        cout<<"Author of the book: "<<a<<endl;
        cin>>c;
        if(c<=copies){
        cout<<"total cost of required copies is "<<c*price<<endl;
        copies=copies-c;
       } 
       else{
        cout<<"required copies are not in stock"<<endl;
       }
    }
}
int main(){
    int n;
    cin>>n;
    book b[n];
    for(int i=0;i<n;i++){
        cout<<"details of the book: "<<endl;
        b[i].getdata();
    }
    for(int i=0;i<n;i++){
        b[i].setdata();
    }
    
    (*b).checkdata();
    return 0;
}