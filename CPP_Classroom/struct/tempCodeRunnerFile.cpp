#include<iostream>
using namespace std;
int main(){
    struct student //here it is in local scope. BUT we can also declare in global scope. ultimately, we are creating a variable.
    {
        /* data */
        double CGPA;