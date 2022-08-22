#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
//ch 10, ch 11, ch 9 of balaguruswamy
    ofstream myfile;
    myfile.open("example.txt",ios::ate);
    myfile<<"Writing this to a file.\n";
    myfile.close();
    
    return 0;
}