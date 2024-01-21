#include<stdio.h>
int main()
{
    int num[]={10,12,13,18,17,19};
    int value,i,position=-1;
    printf("Put your Number");
    scanf("%d",&value);

    for(i=0;i<7;i++)
    {
        if(value==num[i])
        {
            position=i+1;
            break;
        }

    }
    if(position==-1)
        printf("Not Found");

    else
        printf("The Value is Found and Position is : %d",position);
    return 0;
}
