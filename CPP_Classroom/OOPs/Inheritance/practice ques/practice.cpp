#include<iostream>
using namespace std;
class employee{
    int empNo;
    string empName;
    int years;
    int punctual;
    int taskComp;
    int onTimeSub;
    
    
    int calculatetotal(){
        int totalGrade=punctual+taskComp+onTimeSub;
        return totalGrade;
        
    }
    int calculatePercent(){
        int totalGrade=punctual+taskComp+onTimeSub;
        int percentage=totalGrade/3;
        return percentage;
    }

    public:
    employee(){};

    void takedata(int n, string name, int y,int p, int tc, int ots){
        empNo=n;
        empName=name;
        years=y;
        punctual=p;
        taskComp=tc;
        onTimeSub=ots;
    }
    void showdata(){
        cout<<empNo<<" "<<empName<<" "<<years<<" "<<punctual<<" "<<taskComp<<" "<<onTimeSub<<endl;
        cout<<"Total grade is "<<calculatetotal()<<endl;
        cout<<"Grade percentage is "<<calculatePercent()<<"%"<<endl;
    }
};
int main(){
    employee e1;
    e1.takedata(1,"Loveleen",5,100,100,100);
    e1.showdata();
    return 0;
}