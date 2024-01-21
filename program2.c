
#include <stdio.h>
int main()
{
	int a,b,c,max;
	scanf("%d%d%d",&a,&b,&c);
	if(a>=1&&a<=10)
	{
		if(b>=1&&b<=10)
		{
			if(c>=1&&c<=10)
			{
				if(a==1)
				{
					max=((a+b)*c);
					printf("%d",max);
				}
				else if(b=1)
				{
					if(a>c)
					{
						max=(a*(b+c));
						printf("%d",max);
					}
					else if(a<c)
					{
						max=((a+b)*c);
						printf("%d",max);
					}
				}
				else if(c=1)
				{
					max=(a*(b+c));
					printf("%d",max);
				}
				else
				{
					max=a*b*c;
					printf("%d",max);
				}
			}
		}
	}
	return 0;
}
