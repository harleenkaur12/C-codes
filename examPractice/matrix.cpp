#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
        };
        //for accessing the elements of this matrix
        for (int i = 0; i <3; i++)
        {
            /* code */
            for (int j = 0; j <4; j++)
            {
                /* code */
                cout<<arr[i][j];
            }
            cout<<endl;
            
        }
        for (int j = 0; j < 4; j++)
        {
            /* code */
            for (int i = 0; i < 3; i++)
            {
                /* code */
                cout<<arr[i][j];
            }
            cout<<endl;
        }
        
        
    return 0;
}