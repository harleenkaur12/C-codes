#include<iostream>
using namespace std;
class student{
    private:
    string student_name;
    int student_roll_no;
    int student_age;

    public:
    string getstudentName(){
        return student_name;
    }
    void setStudentName(string student_name){
        this->student_name=student_name;
    }
    int getStudentRollNo(){
        return student_roll_no;
    }
    void setStudentRollNo(int student_roll_no){
        this->student_roll_no=student_roll_no;
    }
};

int main(){
    student s1;
    s1.setStudentName("Harleen");
    cout<<s1.getstudentName();
    return 0;
}