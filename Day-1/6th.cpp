//fibonacci 

#include<iostream>
using namespace std;
int main()
{
    int last=0, prev=1, curr, n;
    cout<<"Enter number: ";
    cin>>n;
     
    if(n==1)
     {
        cout<<last;
     }
    else if(n==2)
     {
        cout<<prev;
     }
    else{ 

    for(int i=3; i<=n; i++)
    {
        curr=last+prev;
        last=prev;
        prev=curr;
    }
    }
    cout<<curr;




}
