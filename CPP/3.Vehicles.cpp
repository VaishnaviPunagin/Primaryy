#include<iostream>
using namespace std;

class vehicle{
  int engineCapacity;
  string name;
public:
  vehicle(string n, int c)
  {
    name=n;
    engineCapacity=c;
  }
  void display()
  {
    cout<<"Name : "<<name<<endl<<"Engine Capacity : "<<engineCapacity<<endl<<"------------------------"<<endl;;
  }
  bool equals(vehicle given)
  {
    if(name==given.name && engineCapacity==given.engineCapacity)
      return true;
    else
      return false;
  }
};

int main()
{
    vehicle v1("BMW", 2500), v2("Ferrari",1500);
    vehicle v3(v1);
    cout<<"So, based on data to be entered, here are your existing objects :"<<endl<<"---------------"<<endl;
    v1.display();
    v2.display();
    v3.display();
    cout<<"Now, we call an equal function that comparws 2 objects at once and returns a True(1) or False(0)"<<endl;
    int one=v1.equals(v2);
    cout<<"First comparision, v1(BMW) and v2(Ferrari) returns "<<one<<"."<<endl;
    one=v1.equals(v3);
    cout<<"Second comparision, v1(BMW) and v3(BMW) returns "<<one<<"."<<endl;
    return 0;
}
