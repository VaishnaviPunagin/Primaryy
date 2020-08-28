#include<iostream>
using namespace std;

class employee{
  string name,empNumber;
  int salary;
public:
  void readEmployeeDetails();
  void displayEmployeeDetails();
};

void employee::readEmployeeDetails()
{
  cout<<"Enter Name ::  ";
  cin>>name;
  cout<<"Enter EmpNumber ::  ";
  cin>>empNumber;
  cout<<"Enter Salary :: ";
  cin>>salary;
}

void employee::displayEmployeeDetails()
{
  cout<<"Name : "<<name<<"\nEmpNumber : "<<empNumber<<"\nSalary : "<<salary<<"\n";
}

int main()
{
  int howMany;
  cout<<"How many Employee details do you want to enter?\n";
  cin>>howMany;
  cout<<"We shall now neter details for "<<howMany<<" employees!\n\n---------------\n";
  employee people[howMany];
  for(int i=0;i<howMany;i++)
  {
    cout<<"For employee "<<i+1<<" --> \n";
    people[i].readEmployeeDetails();
    cout<<"---------------\n";
  }
  cout<<"\n\nYay we are done, let us see the data stored now.\n\n---------------\n";
  for(int i=0;i<howMany;i++)
  {
    cout<<"Employee "<<i+1<<" --> \n";
    people[i].displayEmployeeDetails();
    cout<<"---------------\n";
  }
  return 0;
}
