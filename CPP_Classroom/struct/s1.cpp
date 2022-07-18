#include<iostream>
using namespace std;
int main(){ //structure defn is a blueprint of template
    struct student //here it is in local scope. BUT we can also declare in global scope. ultimately, we are creating a variable.
    {
        /* data */
        double CGPA;
        short rollNo;
        char gender;
        
    };
    
    student S1;
    student S2,S3;
    //S1.id=5;
    S1.rollNo=5;
    
    //cout<<"Id of student S1 "<<S1.id<<endl;
    cout<<"Size of structure "<<sizeof(student)<<endl;
    cout<<"address of S1 is "<<&S1<<endl;
    cout<<"address of S1.CGPA  is "<<&S1.CGPA;
    




    
 return 0;
}