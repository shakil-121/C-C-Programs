#include<stdio.h>
int main() 
{
 int n,i,b;
 scanf("%d",&n); 
 for (i=0; i<n; i++)
 {
     scanf("%d",&b); 
     if (b%2==0 && b>0)
         printf("EVEN POSITIVE\n"); 
     else if(b%2==0 && b<0) 
         printf("EVEN NEGATIVE\n"); 
     else if((b%2==1 || b%2==-1) && b>0) 
         printf("ODD POSITIVE\n"); 
     else if((b%2==1 || b%2==-1) && b<0) 
         printf("ODD NEGATIVE\n"); 
    else if(b==0) 
         printf("NULL\n"); 
 }
 
   return 0;

}