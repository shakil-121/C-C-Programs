#include<stdio.h>
int main()
{
    int a[5],sum=0,i,n;
    printf("How Many Numbers:-");
    scanf("%d",&n);
    //printf("Enter Five Numbers\n");
    //scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("The Sum is :%d\n",sum);
    printf("The Avarage is:%d\n",sum/n);
    return 0;
}
