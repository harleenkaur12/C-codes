#include<iostream>
using namespace std;
void output(int start){
    if(start==0){
        return;
    }
    cout<<start<<endl;
    output(start-1); //one thing I noticed is that we are making a change in the argument of the function. so that changed value gets passed each time following a certain pattern

}
int main(){ //recursion is the property that functions have to be called by themselves
//it is useful for some tasks like sorting elements, calculating the factorial of numbers.

cout<<"Using for loop"<<endl;
for (int i = 5; i >0; i--)
{
    /* code */
    cout<<i<<endl;
}
cout<<"Using recursion"<<endl;
output(5);


    
    return 0;
}