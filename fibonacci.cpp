#include<iostream>

 using namespace std;
 int main()
 {
     int i,n;
     long int f[50];
     f[1]=1;
     f[2]=1;
     for(i=3;i<50;i++)
     {
         f[i]=f[i-1]+f[i-2] ;
     }
     cin>>n;
     cout<<f[n];
     return 0;
 }
