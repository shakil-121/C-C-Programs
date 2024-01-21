#include<iostream>
using namespace std;
int main()
{
 int n,k,i,cunt=0,a[100];
 cin>>n>>k;
 for(i=0;i<n;i++)
 {
     cin>>a[i];
 }
  for(i=0;i<n;i++)
  {
       if(a[i]>=a[k-1] && a[i]>0)
        cunt++;
  }
   cout<<cunt<<endl;
 return 0;
 }
