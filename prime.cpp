#include<iostream>
using namespace std;

 int main()
 {
     int i,n,temp=0;
     cout<<"Enter a integer Number";
     cin>>n;

     for(i=2;i<n;i++)
     {
         if(n%i==0)
         {
             temp++;
             break;
         }
     }
     if(temp==0 && n!=1)
     {
         cout<<n <<"Is a Prime Number";
     }
     else
     {
         cout<<n <<"Is Not Prime";
     }
     return 0;
 }
