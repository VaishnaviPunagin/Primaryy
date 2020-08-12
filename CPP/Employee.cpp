/*2.  Write a program by creating an 'Employee' class having the following functions and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.*/



#include<iostream>
using namespace std;

class Employee
{
	int Salary, HoursPerDay;
	int AddSal(int), AddWork(int),Changes();	
	public: void getinfo();
};

int Employee::AddSalary(int salary)
{
	salary+=10;
	return salary;
}

int Employee::AddWork(int salary)
{
	salary+=5;
	return salary;
}

void Employee::Changes()
{
	if(Salary<=500)
		Salary=AddSal(Salary);
	if(HoursPerDay>=6)
		Salary=AddWork(Salary);
}

void Employee::getinfo()
{
	cin>>Salary>>HoursPerDay;
	cout<<"Entered Salary : "<<Salary<<" and Hours of wokr per day : "<<HoursPerDay<<" ."<<endl;
	Changes();
	cout<<"After certain evaluation, updated Salary is "<<Salary<<" ! Thank you."<<endl;
}

int main()
{
	class Employee first;
	first.getinfo();
	return 0;
}
