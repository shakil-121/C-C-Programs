#include<iostream>
#include<string>
using namespace std;


class student
{
    string name;
    int id,phone;

    public:
    void getdata(string a,int b,int c);
    void putdata(void)
    {
        cout<<"Name : "<<name<<"\n";
        cout<<"Student ID : "<<id<<"\n";
        cout<<"Student Phone Number : "<<phone<<"\n";

    }
};

  void student::getdata(string a,int b,int c)
  {
      name=a;
      id=b;
      phone=c;
  }

  int main()
  {
      student x;
      cout<<"\n Object x Info of Student 01"<<endl;
      x.getdata("Shakil",76,187142);
      x.putdata();

      student y;
      cout<<"\n Object x Info of Student 02"<<endl;
      y.getdata("Debu",28,187142);
      y.putdata();

      student z;
      cout<<"\n Object z Info of Student 03"<<endl;
      z.getdata("Debu",102,187142);
      z.putdata();

      student w;
      cout<<"\n Object w Info of Student 04"<<endl;
      w.getdata("Chironjit",87,187142);
      w.putdata();

      student j;
      cout<<"\n Object j Info of Student 05"<<endl;
      j.getdata("Jumman",102,187142);
      j.putdata();

      student m;
      cout<<"\n Object z Info of Student 06"<<endl;
      m.getdata("Mujib",00,187142);
      m.putdata();

      return 0;
  }

