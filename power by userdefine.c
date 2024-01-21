 #include<stdio.h>  
 void power(int base,int exp)
 {
 int result=1,i; 
  for(i=1;i<=exp;i++)
   {
  result=result*base; 
  }
  printf("the power=%d",result);
 }
 int main() 
 { 
  int base,exp;  
  printf("type base =\n"); 
  scanf("%d",&base); 
  printf("type exponent =\n");
  scanf("%d",&exp);

  power(base,exp);

 }