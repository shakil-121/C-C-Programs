#include<math.h>
int main()
{
	int a,b,c,end,i=1,sum=0,k;
	scanf("%d",&end);
	for(i;i<=end;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		sum=a+b+c;
		if(sum%3==0 && sum%==0)
		{
			printf("Case %d: Peaceful\n",i);
		}
		else
		{
			printf("Case %d: Fight\n",i);
		}
	}
	return 0;
}
