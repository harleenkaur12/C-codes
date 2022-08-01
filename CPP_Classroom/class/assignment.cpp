// #include<iostream>
// using namespace std;
// class distance{
//     int feet;
//     int inches;
//     public:
    
//     distance(int f=0,int i=0){
//         feet=f;
//         inches=i;
//     }
//     void operator=(const distance &d){
//         feet=d.feet;
//         inches=d.inches;
//     }
//     void displayDistance(){
//         cout<<feet<<"feets"<<inches<<"inches:"<<endl;
//     }
//     distance (const distance & d){
//         feet=d.feet;
//         inches=d.inches;
//     }
// };
// int main(){
//     distance d1(11,10);
//     distance d2(5,11);
//     cout<<"First distance: ";
//     d1.displayDistance();
//     d1=d2;
//     cout<<"First distance: ";
//     d1.displayDistance();
//     return 0;
// }