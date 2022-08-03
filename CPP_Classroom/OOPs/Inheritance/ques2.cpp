#include<iostream>
using namespace std;
class student{
    int admissionNo;
    string studentName;
    int marksScience, marksMaths, marksEnglish;
    
     student(int a=0,string studentName="",int s=0, int ms=0, int mm=0, int me=0){};
    //        admissionNo=a;
    //        studentName=s;
    //        marksScience=ms;
    //        marksMaths=mm;
    //        marksEnglish=me;
    // }
    //student(){};
    void calculateTotal(){
        int total=marksScience + marksMaths+ marksEnglish;
        cout<<total<<endl;

    }
    public:
    void showdata(){
        cout<<admissionNo<<" "<<studentName<<" "<<marksScience<<" "<<marksMaths<<" "<<marksEnglish<<" "<<endl;
    }
    void takedata(int a,string studentName,int s, int ms, int mm, int me){
           admissionNo=a;
           studentName=s;
           marksScience=ms;
           marksMaths=mm;
           marksEnglish=me;
    }
};
int main(){
}