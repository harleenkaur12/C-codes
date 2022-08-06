#include<bits/stdc++.h>
using namespace std;
//class Inch;//size ni btaoge to firse error ayega compile time error
//so type compatbility can be done from one to another, inches access feet but feet cant access int

 class Employee{
    int empno;
    string empname;
    int yoe;
    int punctual,taskrate,ontime;
    char totalg;

void grading(){
  float prcnt=(punctual+taskrate+ontime)/3;
  if(prcnt>80){
    totalg='a';
  }
  else if(prcnt>60){
    totalg='b';
  }
  else{
  totalg='c';
  }
}
public:
void takedata(int en,string name,int years,int p,int t,int o){
  empno=en;
  empname=name;
  yoe=years;
  punctual=p;
  taskrate=t;
  ontime=o;
 grading();

}
char grades(){
  return totalg;
}
void showdata(){
  cout<<empno<<" "<<empname<<endl;
  cout<<yoe<<" "<<endl;
}
};
class Performance:public Employee{
public:
  Performance(Employee &obj){
   char ans= obj.grades();
   cout<<ans<<endl;
  }
};
int main()
{
int n;
cin>>n;
Employee e[n];
for(int i=0;i<n;i++){
  
  int empno,yoe,p,t,o;
  string name;
  cin>>empno>>name>>yoe>>p>>t>>o;
 
  e[i].takedata(empno,name,yoe,p,t,o);
  e[i].showdata();
  Performance p1(e[i]);

}
return 0;
}