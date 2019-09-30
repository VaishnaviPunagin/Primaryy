#include<stdio.h>
#include<stdlib.h>

//function declarations KEEP TRACK PLIS

//void customer();
//void admin();
 


int MainMenu()
{
	printf("*********************\nWELCOME TO THE HOTEL\n*************************\n");
	printf("1)Customer Log in\n2)Admin Log in\n3)Exit\nPlease pick an option :: ");
	int option;
	scanf("%d",&option);
	switch(option)
	{
		//case 1 : customer(); break;
		//case 2 : admin(); break;
		case 3 : exit(0);
		default : printf("ERROR. GO DIE\n\n");
	}
	MainMenu();
	return 0;
}

int main()
{
	MainMenu();
	return 0;
}
