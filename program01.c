#include<stdio.h>
int main()
{
    int x,a,b,c,d;
    do
    {

        scanf("%d",&x);
        if(x==0)
            break;
        else
        {
            a=x%10;
            b=5*a;
            c=x/10;
            d=c-b;
            if(d%17==0)
                printf("1\n");
            else
                printf("0\n");
        }



    }
    while(x!=0);



    return 0;
}

