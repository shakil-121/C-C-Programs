#include <stdio.h>

int main(){

   int y,i,x;
   scanf("%d",&x);
   for(i=0;i<x;i++)
   {
   scanf("%d",&y);

   if (((y % 4 == 0) && (y % 100!= 0)) || (y%400 == 0))

      printf("February 29");

   else

      printf("March 1");
   }


   return 0;

}
