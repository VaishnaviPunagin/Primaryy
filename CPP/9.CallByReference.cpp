#include<iostream>
using namespace std;

class content{
  int testNumber;
public:
  content(int number){
    testNumber=number;
  }
  void change(content &test){
    test.testNumber+=testNumber;
    test.testNumber+=500;
  }
  void display(){
    cout<<"Content stored : "<<testNumber<<"\n";
  }
};

int main()
{
  content first(10),second(230);
  cout<<"Before any change : \n"<<"First object : ";
  first.display();
  cout<<"Second object : ";
  second.display();
  first.change(second);
  cout<<"\nAfter calling the change() function : \n"<<"First object : ";
  first.display();
  cout<<"Second object : ";
  second.display();
  cout<<"^^Change function calls the second object by reference and adds content of object first and 500 to the content of the second object!\n";
  return 0;
}
