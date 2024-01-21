//Find Largeest Number a,b,c

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,largest;
    cout<<"Enter Three Integer Values:";
    cin>>a>>b>>c;

    largest=a;
    if(b>largest)
        largest=b;
    if(c>largest)
         largest=c;
    cout<<"The largest number is :"<<largest<<endl;
    return 0;
}
