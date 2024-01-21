//This Program Calculate Some Volume

#include<iostream>
using namespace std;

float volume(float length,float heigth,float width)
{
    return length*heigth*width;
}
float volume(float r,float heigth)
{
    return 3.1416*r*heigth;
}
float volume(float length)
{
    return length*length*length;
}

int main()
{
    float x,r,heigth,length,width;

    while(1)
    {   int x;
        cout<<"This Program Calculate Some Volume"<<endl<<endl;
        cout<<"1. Volume of Rectangle"<<endl;
        cout<<"2. Volume of Cylinder"<<endl;
        cout<<"3. Volume of cube"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter The Option (1/2/3/4)"<<endl;
        cin>>x;

        switch(x)
        {
            case 1:
        cout<<"Enter the value of length,heigth and width for Rectangel"<<endl;
        cin>>length>>heigth>>width;
        cout<<"Volume of Rectangle is:"<< volume(length,heigth,width)<<endl;
        break;

    case 2:
        cout<<"Enter the value of r and heigth for Cylinder"<<endl;
        cin>>r>>heigth;
        cout<<"Volume of Cylinder is:"<< volume(r,heigth)<<endl;
        break;

        case 3:
        cout<<"Enter the value of length for Cube"<<endl;
        cin>>length;
        cout<<"Volume of Cube is:"<< volume(length)<<endl;
        break;

        case 4:
          exit(1);
        }

    }




}
