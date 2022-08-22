#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct info{
	string name;
	string branch;
	int rollNo;
	int year;
};

int main(){
	string name,branch;
	int rollNo,year;
	cout << "Enter Name and Branch:-"<<endl;
	cin>> name >>branch;
	cout << "Enter Your Roll No and year:-"<<endl;
	cin>> rollNo>> year;
	info stud = {name,branch,rollNo,year};
	
	ofstream myfile;
	myfile.open("example.txt");
	myfile << "Name:-" <<stud.name<<"\n";
	myfile << "Roll No:-" <<stud.rollNo<<"\n";
	myfile << "Branch:-" <<stud.branch<<"\n";
	myfile << "Year:-" <<stud.year<<"\n";
	myfile.close();
	
	fstream inFile;
	inFile.open("example.txt");
	if(!inFile){
		cout << "Unable to open file"<<endl;
		exit(1);
	}else{
		string tp;
		while(getline(inFile,tp)){
			cout << tp<<'\n';
		}
		inFile.close();
	}
}