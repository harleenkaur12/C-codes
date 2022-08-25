#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    string line;
    ifstream myfile("reads.txt");
    if(myfile.is_open()){
        while(getline(myfile,line)){
            cout<<line<<endl;
        }
        myfile.close();
    }
    else cout<<"unable to open file";
    return 0;
}