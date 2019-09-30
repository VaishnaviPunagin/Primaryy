#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

struct user
{
	char name[50],mailid[20],number[15],idproof[25];
	struct user *next;
}

void newuser()
{
	
	printf("\n\nYou are NEW HOIIIIIIIIIIIIIIIIIIIII\n\n");
	struct user * add;
	char var[100];
	add=(struct user*)malloc(struct user);
	printf("Enter your name ::  ");
	scanf("%s", var);
	add->name=var;
	printf("Enter mail id ::  ");
	scanf("%s", var);
	add->mailid=var;
	printf("Enter number ::  ");
	scanf("%s", var);
	add->number=var;
	invalid : 
	printf("ID Proof ::  pick (1) for Aadhar or (2) for PAN :: ");
	int idop;
	scanf("%d", &idop);
	printf("Enter ID number ::   ");
	scanf("%s",idproof);
	switch(idop)
	{
		case 1 : if(strlen(idproof)!=12)
			{	
				printf("Aadhar number not valid. Try again. \n");
				goto invalid;
			}
							
		case 2 : int c=panvalidity(idproof); 
			 if(c!=10)
			 {
				printf("Invalid PAN number. Try again.\n");
				goto invalid;
			 }
			
	}	
}


int panvalidity(char id[25])
{
	int c=0;
	for(int i=0;i<strlen(id);i++)
	{
		if(i<5 || i==9)
		{
			if(isaplha(id[i]))
				c++;
		}
		else if(isdigit(id[i]))
			c++;
	}
	return c;
}


void customer()
{
	printf("\n-----\n-----Customer menu-----\n1.New User\n2.Existing User\n3.Back to Main Menu\n4.Exit\n-----\nEnter an option (1-2-3-4) ::  ");
	int option;
	scanf("%d",&option);
	switch(option)
	{
		case 1 : newuser(); break;
		case 2 : existinguser(); break;
		case 3 : MainMenu(); break;
		case 4 : exit(0); 
		default : printf("\nInvalid option\n"); customer();
	}
}NewUse
