/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <conio.h>   

using namespace std;

int main()
{
   int year;
   cout << "Enter the year";
   cin>> year;
   
   if ((year%4==0) && (year%100!=0))
   {
       cout<<"it is a leab year";
   }
   else if ((year%100==0) && (year%400==0))
   {
       cout<<"it is a leab year";
   }
   else if (year%400==0)
   {
       cout<<"it is a leab year";
   }
   else
   {
       cout<<"it is not a leap year";
   }
    getch();
}
