#include<iostream>
using namespace std;
 struct movies_t{
        string title;
        int year;
    };

    struct friends_t{
        string name;
        string email;
        movies_t favourite_movie;
    }charle,maria,yudhvir;

int main(){
    friends_t yudhvir;
    yudhvir.name="Harsh";
    yudhvir.email="harsh@gmail.com";
    yudhvir.favourite_movie.title="badla";
    yudhvir.favourite_movie.year=2015;

   

    return 0;
}