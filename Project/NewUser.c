#include<stdio.h>
#include<ctype.h>
#include<string.h>

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
	if(c==10)
		printf("Valid PAN\n");
	else
		printf("Entered PAN number is invalid. ID not valid\n");
}
void newuser()
{
	printf("You are NEW HOIIIIIIIIIIIIIIIIIIIII\n");
	char name[50],mailid[20],number[15],idproof[25];
	printf("Enter your name ::  ");
	scanf("%s",name);
	printf("Enter mail id ::  ");
	scanf("%s",name);
	printf("ID Proof ::  pick (1) for Aadhar or (2) for PAN :: ");
	int idop;
	scanf("%d",&idop);
	printf("Enter ID number ::   ");
	scanf("%s",idproof);
	switch(idop)
	{
		case 1 : if(strlen(idproof)!=12)
				printf("Issa wrong. Try again later.");
		case 2 : panvalidity(idproof); break;
	}	
}
