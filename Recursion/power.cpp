// #include<iostream>
// using namespace std;
// int power(int n){
//     //base case
//     if(n==0){
//         return 1;
//     }
//     // int small=power(n-1);
//     // int big=2*small;
//     // return big;
// return 2* power(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=power(n);
//     cout<<ans;
//     return 0;
// }

#include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    return 2*power(n-1);
}
int main(){
    int n=4;
    cout<<power(n);
    return 0;
}