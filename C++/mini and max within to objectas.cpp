
//write a program to find the largest an minimum numb between to objects ;
#include<iostream>
using namespace std;

class B;
class A{
int num1;
public:
    void input(int a)
    {
        num1=a;
    }
friend void Maxmin(A a,B b);
};

class B{
int num2;
public:
    void input(int b)
    {
        num2=b;
    }
friend void Maxmin(A a,B b);
};

void Maxmin(A a,B b)
{
    if(a.num1>b.num2)
    {
        cout<<a.num1<<" Is Maximum"<<endl;
        cout<<b.num2<<" Is Minimum"<<endl;
    }
     else
    {
        cout<<b.num2<<" Is Maximum"<<endl;
         cout<<a.num1<<" Is Minimum"<<endl;
    }

}

int main()
{
    A a; //A is class and a is object create
    B b;
    int x,y;
    cout<<"\n Enter a Number :";
    cin>>x;
    a.input(x);
    cout<<"\n Enter another Number :";
    cin>>y;
    b.input(y);
    Maxmin(a,b);

    return 0;
}








