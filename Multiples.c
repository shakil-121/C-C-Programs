#include <stdio.h>
 
int main() {
   int a,b,temp; 
   scanf("%d%d",&a,&b); 
   if(a<b) {
 temp=a; 
     a=b;
     b=temp;
   }
    if(a%b==0) 
    {
        printf("Sao Multiplos\n");//are multiples
    }
    else
      printf("Nao sao Multiplos\n");//aren’t multiples
    return 0;
}