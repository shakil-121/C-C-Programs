//Area of Rectangle	Area = l × w	l = length w = width
//Area of a Triangle	Area = 1/2 b×h	b = base h = height
//Area of a Circle	Area = πr2	r = radius of the circle
//Area of a Trapezoid	Area = 1/2 (a + b)h	a =base 1 b = base 2 h = vertical height

#include<iostream>
using namespace std;

float area(float l,float w)
{
    return l*w;
}
float area(float 0.5,float b,float h)
{
    return 0.5*(b*h);
}
float area(float r)
{
    return 3.1416*r*r;
}
float area(float a,float b,float h)
{
   return 0.5*(a+b)*h;
}

int main()
{
    float a,b,x,l,h,r,w;

    while(1)
    {
     int x;
        cout<<"This Program Calculate Some Area"<<endl<<endl;
        cout<<"1. Area of Rectangle"<<endl;
        cout<<"2. Area of Triangle"<<endl;
        cout<<"3. Area of Circle"<<endl;
        cout<<"4. Area of Trapezoid"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter The Option (1/2/3/4/5)"<<endl;
        cin>>x;

          switch(x)
        {
    case 1:
        cout<<"Enter the value of length and width for Rectangel"<<endl;
        cin>>l>>w;
        cout<<"Area of Rectangle is:"<< area(l,w)<<endl;
        break;

    case 2:
        cout<<"Enter the value of base and heigth for Traiangle"<<endl;
        cin>>b>>h;
        cout<<"Area of Triangle is:"<< area(b,h)<<endl;
        break;

    case 3:
        cout<<"Enter the value of radius of the circle for Circle"<<endl;
        cin>>r;
        cout<<"Area of Circle is:"<< area(r)<<endl;
        break;

     case 4:
        cout<<"Enter the value of length for Trapezoid"<<endl;
        cin>>a>>b>>h;
        cout<<"Area of Circle is:"<< area(a,b,h)<<endl;
        break;

        case 5:
          exit(1);
        }
    }


}
