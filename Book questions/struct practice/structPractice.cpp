#include<iostream>
using namespace std;
int main(){
     struct book
    {
        /* data */
        int x;
        int y;
        char v1;

    };
    struct book book1, book2, book3;
    book1.x=10;
    book1.y=19;
    book1.v1='a'; //char needs to be initialised with single quotes
    
    return 0;
}