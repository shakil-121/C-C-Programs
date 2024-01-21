#include<stdio.h>
int main()
{
    long a,n,s;
    printf("Enter your desire integer input= ");
    scanf("ld",&a);
    printf("\n\n The Reverse form of input= ");
    while(a!=0)
    {
        n=a%10;
        printf("%d",n);
        s=s + n;
        a=a/10;
    }
    printf("%d",s);

    return 0;
}
