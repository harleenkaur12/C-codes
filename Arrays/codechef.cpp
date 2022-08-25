#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int w;
	    cin>>w;
	    int arr[3];
	    int sum=0;
	    bool a=0;
	    for(int i=0;i<3;i++){
	        cin>>arr[i];
	        }
	    for(int i=0;i<3;i++){
	        sum=sum+arr[i];
	        if(w==sum){
	            a=1;
	            break;
	        }
	        else{
	            a=0;
	        }
	        
	}
	if(a=0){
	            cout<<"yes"<<endl;
	        }
	        
	        else{
	            cout<<"no"<<endl;
	        }
	}
	return 0;
}

