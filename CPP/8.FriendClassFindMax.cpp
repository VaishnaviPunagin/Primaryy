#include<iostream>
using namespace std;

class A{
  int x,y;
public:
  A(int one, int two)
  {
    x=one;
    y=two;
  }
  friend class B;
};

class B{
public:
  int max(A z)
  {
    return z.x>z.y? z.x:z.y;
  }
};

int main()
{
  int one, two;
  cout<<"Enter 2 numbers!\n";
  cin>>one>>two;
  A compare(one,two);
  B maximum;
  cout<<maximum::B(compare);
  return 0;
}
