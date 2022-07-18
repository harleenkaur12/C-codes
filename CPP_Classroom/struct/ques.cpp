#include<iostream>
using namespace std;
struct bookshop
{
    /* data */
    string author;
    string title;
    float price;
    string publisher;
    int stockPositions;
};

int main(){
    bookshop books[3];

    books[0].author="Paulo Coelho";
    books[0].title="The alhemist";
    books[0].price=250;
    books[0].publisher="Penguin";
    books[0].stockPositions=10;

    books[1].author="Chetan Bhagat";
    books[1].title="Revolution 2020";
    books[1].price=250;
    books[1].publisher="Penguin";
    books[1].stockPositions=0;

    books[2].author=" Tom ";
    books[2].title="2 States";
    books[2].price=250;
    books[2].publisher="Penguin";
    books[2].stockPositions=5;

    string s,t;
    int u;

    cout<<"Please enter the title of the required book "<<endl;
    cin>>s;

    cout<<"Please enter the author of the required book "<<endl;

    cin>>t;

    

    for (int i = 0; i < 3; i++)
    {
        /* code */
        if (books[i].title==s && books[i].author==t){
            cout<<"It is valid";
            cout<<books[i].title<<endl<<books[i].author<<books[i].price<<endl<<books[i].publisher<<endl<<books[i].stockPositions<<endl;

            cout<<"Enter the number of copies required"<<endl;
            cin>>u;
            if(books[i].stockPositions<=u){
                cout<<books[i].stockPositions*u;
            }

            else{
                cout<<"Not available";
            }

        }
        else{
            cout<<"It is not valid";
        }
 
        
    }
    


    


    
    
    return 0;
}