#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
void MainMenu();
void customer();
struct user
{
	char name[50],mailid[20],number[15],idproof[25],password[10];
	struct user *next;
};

struct user *users=NULL;

void header()
{
  printf("\n");
  printf("  H    H    OOOOO   TTTTTTT  EEEEEE  L                \n");
  printf("  H    H   O     O     T     E       L                \n");
  printf("  HHHHHH  O   O   O    T     EEEE    L                \n");
  printf("  H    H   O     O     T     E       L                \n");
  printf("  H    H    OOOOO      T     EEEEEE  LLLLLL           \n");
  printf("\n");
  printf("  MM   MM      A      NN    N      A      GGGGG  EEEEEE  MM   MM  EEEEEE  NN    N  TTTTTTT       \n");
  printf("  M M M M     A A     N N   N     A A     G      E       M M M M  E       N N   N     T          \n");
  printf("  M  M  M    A   A    N  N  N    A   A    G  GG  EEEE    M  M  M  EEEE    N  N  N     T          \n");
  printf("  M     M   A A A A   N   N N   A A A A   G   G  E       M     M  E       N   N N     T          \n");
  printf("  M     M  A       A  N    NN  A       A  GGGGG  EEEEEE  M     M  EEEEEE  N    NN     T          \n");
  printf("\n");
  printf("  SSSSSS  Y   Y  SSSSSS  TTTTTTT  EEEEEE  MM   MM    \n");
  printf("  S        Y Y   S          T     E       M M M M    \n");
  printf("  SSSSSS    Y    SSSSSS     T     EEEE    M  M  M    \n");
  printf("       S    Y         S     T     E       M     M    \n");
  printf("  SSSSSS    Y    SSSSSS     T     EEEEEE  M     M    \n");
}

/*int panvalidity(char id[25])
{
	int c=0;
	for(int i=0;i<strlen(id);i++)
	{
		if(i<5 || i==9)
		{
			if(isaplha(id[i])==1)
				c++;
		}
		else if(isdigit(id[i])==1)
			c++;
	}
	return c;
}*/


void newuser()
{
	printf("You're a new user! Please enter the following details.\n\n");
	printf("---------------------------------------------\n");
	struct user *add;
	char var[100];
	add=(struct user*)malloc(sizeof(struct user));
	printf("Enter your name ::  ");
	scanf("%s", var);
	strcpy(add->name,var);
	printf("Enter mail id ::  ");
	scanf("%s", var);
	strcpy(add->mailid,var);
	printf("Enter number ::  ");
	scanf("%s", var);
	strcpy(add->number,var);
	int idop,c;
	invalid : 
	printf("ID Proof ::  pick (1) for Aadhar or (2) for PAN :: ");
	scanf("%d", &idop);
	printf("Enter ID number ::   ");
	scanf("%s",var);
	/*switch(idop)
	{
		case 1 : if(strlen(var)!=12)
			{	
				printf("Aadhar number not valid. Try again. \n");
				goto invalid;
			}
							
		case 2 : c=panvalidity(var); 
			 if(c!=10)
			 {
				printf("Invalid PAN number. Try again.\n");
				goto invalid;
			 }
			
	}*/
	strcpy(add->number,var);
	printf("Pick a strong password,Max characters 10.\nPlease enter a password for your user ID :: ");
	scanf("%s", var);
	strcpy(add->password,var);
	add->next=NULL;
	if(users==NULL)
		users=add;
	else
	{
		struct user *temp=users;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=add;
	}	
}


void existinguser()
{
	struct user *temp=users;
	int check=0,i;
	printf("---------------------------------------------\n");	
	printf("You are an existing user! Please enter your Username and Password to view your account details.\n\n");
	printf("NOTE : your username is the name you entered while creating your user ID\n\nUSERNAME :: ");
	char usrname[50],p[10];
	scanf("%s", usrname);
	while(temp->next!=NULL)
	{
		if(strcmp(temp->name,usrname))
		{
			check=1;
			break;			
			
		}
		temp=temp->next;
	}
	if(check==0)
		goto nouser;
	printf("PASSWORD :: You get two trials : ");
	for(i=0;i<2;i++)
	{
		scanf("%s",p);
		while(temp->next!=NULL)
		{
			if(strcmp(temp->name,usrname))
			{
				if(strcmp(temp->password,p))
				{
					printf("Welcome %s. We are glad to have you back! We shall shoon redirect you to the booking menu\n",usrname);
					//PUT THE DELAY THINGY HERE TOO
					//bookingmenu(); // YOU HAVE TO MAKE THIS CAYUSE FILES 
					break;
				}			
			
			}
			temp=temp->next;
		}		
		
	}
	if(i>2)
		printf("Wrong password entered, Both trials lost.\n");
	nouser:
	if(check==0)
		printf("We could not find your account in our databases. Please try again, and check your entered details, or create a new user!\n");
	customer();
}


void customer()
{
	printf("\n-----\n-----Customer menu-----\n1.New User\n2.Existing User\n3.Back to Main Menu\n4.Exit\n-----\n");
	printf("---------------------------------------------\nEnter an option (1-2-3-4) ::  ");
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
	customer();
}






 


void MainMenu()
{
	header();	
	printf("*********************\nWELCOME TO THE HOTEL\n*************************\n");
	printf("1)Customer Log in\n2)Admin Log in\n3)Exit\nPlease pick an option :: ");
	int option;
	scanf("%d",&option);
	switch(option)
	{
		case 1 : customer(); break;
		//case 2 : admin(); break;
		case 3 : exit(0);
		default : printf("ERROR. GO DIE\n\n");
	}
	MainMenu();
}

int main()
{
	MainMenu();
	return 0;
}
