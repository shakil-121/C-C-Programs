#include<iostream>
using namespace std;
int main()
{
    int n,i,f1,f2,f3,num=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>f1>>f2>>f3;
        if(f1+f2+f3>=2)
        {
            num+=1;
        }
    }
        cout<<num<<endl;
    return 0;
}
