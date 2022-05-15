#include<iostream>
using namespace std;
/**
int combination(int n, int r){
	int num,den1,den2;
	for(int i=1;i<=n;i++){
	    int num=1;
		num=num*i;
	}
	
	for(int i=1;i<=r;i++){
		int den1=1;
		den1=den1*i;
	}
	
    for(int i=1;i<=(n-r);i++){
    	int den2=1;
    	den2=den2*i;
	}
	
	int final=(num/(den1+den2));
	return final;
	
}*/
int factorial(int n){      //this is an example of function overloading.
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}
int combination(int n,int r){
	int num=factorial(n);
	int denom=(factorial(r)*factorial(n-r) );
	int comb=num/denom;
	
	return comb;
}

int main(){
	int n;int r;
	cin>>n>>r;
	cout<<"Answer is "<<combination(n,r);
	
}
