//Read an integer N. This N will be the number of integer numbers X that will be read.Print how many these numbers X are in the interval [10,20] and how many values are out of this interval. 

#include <stdio.h>
int main() 
{
    int in=0,out=0,range; 
    long long int data;
    scanf("%d",&range); 
    for(int i=1; i<=range; i++) 
    {
    scanf("%lld",&data);
     if(data>=10 && data<=20)
     {
        in++;
     }
     else
     {
        out++;
     }
    } 
  printf("%d in\n",in);
  printf("%d out\n",out);


    return 0;
}