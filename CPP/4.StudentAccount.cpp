#include<iostream>
using namespace std;

class studentAccount{
  int amount;
public:
  studentAccount()
  {
    amount=1000;
  }
  studentAccount(int more)
  {
    amount=more+1000;
  }
  void Balance()
  {
    cout<<"The current student account has "<<amount<<" of money in it!"<<endl;
  }
};

int main()
{
  studentAccount Percy;
  cout<<"Initial balance when an object is declared without a parameter."<<endl;
  Percy.Balance();
  cout<<"Now, we add some more money to it. Enter an amount please!"<<endl;
  int value;
  cin>>value;
  studentAccount NotPercy(value);
  cout<<"After adding said money"<<endl;
  NotPercy.Balance();
  return 0;
}
