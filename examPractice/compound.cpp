#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    float amount, rate, intrest, time, ci, a;
 
    /*Reading amount, rate of intrest
       and period in years from user
     */
     cout<<"Type the amount: ";
     cin>>amount;
 
     cout<<"Type the interest rate: ";
     cin>>rate;
 
     cout<<"Type the period in years: ";
     cin>>time;
 
     intrest = 1+(rate/100);
 
     // ci=pow(intrest,time);
     ci = 1;
     for(a = 1; a <= time; a++)
        ci = ci * intrest;
 
      a = amount * ci - amount;
 
     cout<<"Your compound interest is: " <<a;
 
    return 0;
}