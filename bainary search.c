#include<stdio.h>

int main()
{
    int a[]={12,15,16,19,42,100};
    int left,right,mid,item=16;
    left=0;
    right=5;

    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]==item)
        {
            printf("Found Index is : %d\n",mid);
            return 0;
        }
        else if(a[mid]<item){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    printf("Item Not Found\n");
    return 0;
}
