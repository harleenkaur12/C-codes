// #include<iostream>
// using namespace std;
// //to insert an element at the end of an array
// int main()
// {
//     int arr[6], i, elem;
//     cout<<"Enter 5 Array Elements: ";
//     for(i=0; i<5; i++)
//         cin>>arr[i];
//     cout<<"\nEnter Element to Insert: ";
//     cin>>elem;
//     arr[i] = elem;
//     cout<<"\nThe New Array is:\n";
//     for(i=0; i<6; i++)
//         cout<<arr[i]<<"  ";
//     cout<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    //common error here is to write int i again and again inside for loop
    int arr[6],elem,i;
    cout<<"Enter 5 Array Elements: ";
    for (i = 0; i < 5; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
    cout<<"Enter the element to insert in the array "<<endl;
    cin>>elem;
    arr[i]=elem;
    cout<<"The new array is "<<endl;
    for (i = 0; i < 6; i++)
    {
        /* code */
        cout<<arr[i];
    }
    

    
    return 0;
}