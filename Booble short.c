//booble short program
#include<stdio.h>
int main()
{
    int i,j,tem;
    int a[]={2,8,7,12,15,3,14};
    int size=7;

    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1;j++){

            if(a[j]>a[j+1]){
               tem=a[j];
            a[j]=a[j+1];
            a[j+1]=tem;
            }
        }
    }
    printf("After Shorting\n");
    for(i=0;i<size;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
    }
