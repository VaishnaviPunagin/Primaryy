#include<iostream>
using namespace std;

class Cars
{
	private : char name[25];
		  int isstarted=0,fuel=20;
		  void start();
		  void drive ();
		  void reverse();
		  void stop();
	public : void entercar();
};

void Cars::start()
{
	if(fuel>=0)
	{
		cout<<"The car is now turned on"<<endl;
		cout<<"Fuel status : "<<fuel<<"amount remaining"<<endl;
		isstarted=1;
	}
	else 
		cout<<"No fuel, please refill"<<endl;
	cout<<"Do we now 1 - drive or 2 - reverse ??"<<endl;
	int whatnext;
	cin>>whatnext;
	if(whatnext==1)
	    drive();
	else if(whatnext==2)
	    reverse();
	else
	{
	    cout<<"Invalid move, what do you want to do? Let's start over."<<endl;
	    start();
	}
		
}

void Cars::drive()
{
	if(isstarted==1)
	{
		cout<<"Lessgo, drive"<<endl;
		fuel--;
	}
	else 
		cout<<"HOW DO YOU EXPECT ME TO DRIVE WHEN IM NOT ON HUHUHUHUH"<<endl;
	if(fuel==0)
		stop();	
	else
	{
	    cout<<"Fuel status : "<<fuel<<"amount remaining"<<endl;
	    cout<<"Do we continue 1 - driving or 2 - reverse or 3 - stop?"<<endl;
	    int whatnext;
	    cin>>whatnext;
	    if(whatnext==1)
	        drive();
	    else if(whatnext==2)
	        reverse();
	    else
	        stop();
	}
}

void Cars::stop()
{
	isstarted=0;
	if(fuel==0)
	    cout<<"You are out of fuel!"<<endl;
	cout<<"Make sure you lock me before you leave and take your key with you"<<endl;
}

void Cars::reverse()
{
    cout<<"Let's back this car up"<<endl;
	drive();
}

void Cars::entercar()
{
	cout<<"Hello owner of the car"<<endl;
	start();
}

int main()
{
	class Cars honda, tarzan;
	cout<<"Do you have a key to car Honda?? Say y/n"<<endl;
	char key;
	cin>>key;
	if(key=='y')
		honda.entercar();
	else
	{
	    cout<<"Do you have a key for car Tarzan?"<<endl;
	    cin>>key;
	    if(key=='y')
	        tarzan.entercar();
	    else
	        cout<<"BEEEDOOOOBEEDOO SIREN BLARING, MAN WIHTOUT KEY IS TRYING TO ENTER THESE CARS"<<endl;
	}
	return 0;
}
