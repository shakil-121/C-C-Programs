#include<stdio.h>
int main()
{
    int a,b,sum=0,temp,i,j;
    for(j=0;j<100;j++)
    {
        scanf("%d %d",&a,&b);
        if(a<=0 || b<=0)
            break;
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        for(i=a;i<=b;i++)
        {
            sum+=i;
            printf(" %d \n",i);
        }
        printf("Sum=%d\n",sum);
        sum=0;
    }
    return 0;
}
