// #include<iostream>
// using namespace std;
// int factorial(int n){
//     //base case
   
    
//     // int smallerProblem=factorial(n-1);
//     // int biggerProblem=n*smallerProblem;
//     // return biggerProblem;
//      if(n==0)
//       return 1;
    
//     return n*factorial(n-1);
   

// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=factorial(n);
//     cout<<ans<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n=6;
    cout<<factorial(n);
    return 0;
}