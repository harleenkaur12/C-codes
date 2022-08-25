#include<iostream>
using namespace std;
int main(){
    struct Student{
        int rollno;
        //string name;
        int age=10;
        int marks;
    }Student1,Student2,Student3;

    /*cin>>Student1.rollno;
    cout<<"Roll no of the first student is "<<Student1.rollno;
     
    cin>>Student1.name;
    cout<<"Name of the first student is "<<Student1.name;*/

    /*cout<<Student1.age;
    cout<<Student2.age;
    cout<<Student3.age;*/
    cout<<sizeof(Student1);
    

    return 0;
}