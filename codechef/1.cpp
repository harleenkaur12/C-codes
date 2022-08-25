#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    for(int a=1;a<=n;a++){
	        for(int b=1;b<=n;b++){
	            if((a+b)%2!=0){
	                count++;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
