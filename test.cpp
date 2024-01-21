
#include<iostream>
using namespace std;
int main()
{
 int a,b,c,en,i=1,sum=0,k;
 cin>>en;
 for(i;i<=en;i++)
	{
		cin>>a,b,c,k;
		sum=a+b+c;
		if(sum%3==0 && k%3==0)
		{
			cout<<"Case"<<i<<":Peaceful\n";
		}
		else
		{
			cout<<"Case"<<i<<":Fight\n";
		}
	}
	return 0;
}
