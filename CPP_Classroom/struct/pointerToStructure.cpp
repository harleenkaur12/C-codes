#include<iostream>
using namespace std;
struct movies_t{
    string title;
    int year;
};

int main(){
    movies_t amovie;
    movies_t*pmovie;
    amovie.title="Hello";
    pmovie=&amovie;
    cout<<pmovie<<endl;
    cout<<pmovie->title;

    return 0;
}