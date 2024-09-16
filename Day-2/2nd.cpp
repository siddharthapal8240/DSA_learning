//leap year

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the year: ";
    cin>>n;
   if(n%400 == 0)
   {
    cout<<"It's Leap Year";
   }
   else if (n%4 == 0 && n%100 != 0)
   {
    cout<<"It's leap Year";
   }
   else
   {
    cout<<"It's not a leap year";
   }
   
}