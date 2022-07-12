
 #include<iostream>
using namespace std;
void output(int*,float*);                //function prototype
int main(){
    int rollno;
    float cgpa;
    cout<<"Enter values:";
    cin>>rollno;
    cin>>cgpa;
    output(&rollno,&cgpa);
    cout<<"\noutput function call is over:\n";

    /*cout<<rollno;
    cout<<cgpa;
    cout<<endl;
    **/
   
    cout<<&rollno<<endl;
    cout<<&cgpa<<endl;
    return 0;
}
void output(int*rollno,float *cgpa){
    cout<<*rollno<<endl;
    cout<<*cgpa<<endl;
}
void output(int r,float c){
    cout<<"Rollno:"<<r+1; //r and c are local variables of output function
    cout<<"CGPA:"<<c+1;
    

}