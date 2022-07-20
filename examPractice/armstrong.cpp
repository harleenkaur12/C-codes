#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    int originalNum=a;  //this definition is required as a gets updated in the while loop
    int result=0;
 
    while (a!=0)
    {
        /* code */

        int rem=a%10;
        result=result+(rem*rem*rem);
        a=a/10;
    }
    if(result==originalNum){
        cout<<"It is an armstrong number "<<endl;
    }
    else{
        cout<<"It is not an armstrong number "<<endl;
    }

    return 0;
}