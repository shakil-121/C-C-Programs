#include <iostream>

using namespace std;

class Time {
  int hour, minute;
  public:
  void setTime(int h, int m) {
    hour = h, minute = m;
  }
  void getTime() {
    cout << hour << "h " << minute << "min "<< endl;
  }
  void sum(Time t1, Time t2);
};

void Time::sum(Time t1, Time t2) {
  hour = t1.hour + t2.hour + (t1.minute + t2.minute) / 60;
  //minute = (t1.second + t2.second) / 60 + (t1.minute + t2.minute) % 60;
  //second = (t1.second + t2.second) % 60;
}

int main() {
  Time t1, t2;
  t1.setTime(2, 45);
  t2.setTime(3, 50);
  t3.sum(t1, t2);
  cout << "Time 01: ";
  t1.getTime();
  cout << "Time 02: ";
  t2.getTime();
  cout << "Total Time: ";
  t3.getTime();

  return 0;
}
