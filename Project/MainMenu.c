#include<stdio.h>
#include<stdlib.h>

//function declarations KEEP TRACK PLIS

void newuser();
void existinguser();
void admin();

int MainMenu()
{
	printf("*********************\nWELCOME TO THE HOTEL\n*************************\n");
	printf("1)New User\n2)Existing User3)Admin Log in\n4)Exit\nPlease pick an option :: ");
	int option;
	scanf("%d",&option);
	switch(option)
	{
		case 1 : newuser(); break;
		case 2 : existinguser(); break;
		case 3 : admin(); break;
		case 4 : exit(0);
		default : printf("ERROR. GO DIE\n\n");
	}
	MainMenu();
	return 0;
}
