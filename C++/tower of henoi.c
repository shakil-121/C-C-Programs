#include<stdio.h>
void tower(int n,char beg,char aux,char end)
{
   if(n>0) {
      tower(n-1,beg,end,aux);
      printf("\n%c to %c",beg,end);
      tower(n-1,aux,beg,end);
   }
}

int main() {

   int n;
   printf("Enter the number of Disc: ");
   scanf("%d",&n);

   tower(n,'A','B','C');
   return 0;
}
