#include <stdio.h>
int main()
{
	int x,n=2,flag=0;
	for(x=4;x<=100;x++)
	{
		for(n;n<=x/2;n++)
		{
			if(x%n==0)
			{
				flag++;
			}
		}
		if(flag==0)
		{
			printf("%d is a prime number\n",x);
		}
		flag=0;
	}
	return 0;
}
