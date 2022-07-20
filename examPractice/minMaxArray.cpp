#include <iostream>
#define MAX_SIZE 100 //Maximum size of the array
using namespace std;
 
int main()
{
 
   int arr[100];
    int i, max, min, size;
 
   // Reading array sizr & elements in the array
 
    cout<<"Enter size of the array: ";
    cin>>size;
    cout<<"Enter elements in the array: ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
 
    /* Supposes the first element as maximum and minimum */
    max = arr[0];
    min = arr[0];
 
    /*
     * Finds maximum and minimum in all array elements.
     */
    for(i=1; i<size; i++)
    {
        // Finding max number
        //if cuurent element of array is greater than max
        if(arr[i]>max)
        {
            max = arr[i];
        }
 
        // Finding min number
        // If current element of array is smaller than min
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    //Finding the maximum and minimum element
 
    cout<<"Maximum element is: "<<max<<endl;
    cout<<"Minimum element is: "<<min<<endl;
    return 0;
}