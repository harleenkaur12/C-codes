// #include<iostream>
// using namespace std;
// void print(int n){
//     //base case
//     if(n==0){
//         return;
//     }
//     cout<<n<<endl;

//     print(n-1);
// }
// int main(){
//     int n;
//     cin>>n;

//     print(n);
//     return 0;
// }

#include<iostream>
using namespace std;
int print(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    return print(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=print(n);
    cout<<ans<<endl;
    return 0;
}