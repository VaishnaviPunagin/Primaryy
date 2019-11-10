#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define TRUE    1
#define FALSE   0
void custmenu();
int main();
void MainMenu();
void customer();
void admin();
struct user
{
	char name[50],mailid[20],number[15],password[10];
	struct user *next;
};
struct CustomerDetails
{
	char roomnumber[10];
	char name[20];
	char address[25];
	char phonenumber[15];
	char email[20];
	char period[10];
	char arrivaldate[10];
}s;
void delay(int number_of_seconds)
{
	int milli_seconds = 1000 * number_of_seconds;
	clock_t start_time = clock();
	while (clock() < start_time + milli_seconds)
		;
}

int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *months[]=
{
	" ",
	"\n\n\nJanuary",
	"\n\n\nFebruary",
	"\n\n\nMarch",
	"\n\n\nApril",
	"\n\n\nMay",
	"\n\n\nJune",
	"\n\n\nJuly",
	"\n\n\nAugust",
	"\n\n\nSeptember",
	"\n\n\nOctober",
	"\n\n\nNovember",
	"\n\n\nDecember"
};
int inputyear(void)
{
	int year;

	printf("Please enter a year (example: 1999) : ");
	scanf("%d", &year);
	return year;
}
int determinedaycode(int year)
{
	int daycode;
	int d1, d2, d3;
	d1 = (year - 1.)/ 4.0;
	d2 = (year - 1.)/ 100.;
	d3 = (year - 1.)/ 400.;
	daycode = (year + d1 - d2 + d3) %7;
	return daycode;
}
int determineleapyear(int year)
{
	if((year% 4 == FALSE) && (year%100 != FALSE) || (year%400 == FALSE))
	{
		days_in_month[2] = 29;
		return TRUE;
	}
	else
	{
		days_in_month[2] = 28;
		return FALSE;
	}
}
void calendar(int year, int daycode)
{
	int month, day;
	for ( month = 1; month <= 12; month++ )
	{
		printf("%s", months[month]);
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );
		for ( day = 1; day <= 1 + daycode * 5; day++ )
		{
			printf(" ");
		}
		for ( day = 1; day <= days_in_month[month]; day++ )
		{
			printf("%2d", day );
			if ( ( day + daycode ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
			daycode = ( daycode + days_in_month[month] ) % 7;
	}
}
void cal(void)
{
	int year, daycode, leapyear;
	year = inputyear();
	daycode = determinedaycode(year);
	determineleapyear(year);
	calendar(year, daycode);
	printf("\n");
}


struct user *users=NULL;

void header()
{
	system("clear");
	printf("\n");
  printf("||-------------------------------------------------------------------------------------------------||\n\n");
  printf("||-------------------------------------------------------------------------------------------------||\n\n");
  printf("|| 		 		H    H    OOOOO   TTTTTTT  EEEEEE  L                		     ||\n");
  printf("||  		 		H    H   O     O     T     E       L                		     ||\n");
  printf("|| 		 		HHHHHH  O   O   O    T     EEEE    L                		     ||\n");
  printf("||  		 		H    H   O     O     T     E       L                		     ||\n");
  printf("||  		 		H    H    OOOOO      T     EEEEEE  LLLLLL           		     ||\n");
  printf("\n");
  printf("||	MM   MM      A      NN    N      A      GGGGG  EEEEEE  MM   MM  EEEEEE  NN    N  TTTTTTT     ||\n");
  printf("||    M M M M     A A     N N   N     A A     G      E       M M M M  E       N N   N     T        ||\n");
  printf("||    M  M  M    A   A    N  N  N    A   A    G  GG  EEEE    M  M  M  EEEE    N  N  N     T        ||\n");
  printf("||    M     M   A A A A   N   N N   A A A A   G   G  E       M     M  E       N   N N     T        ||\n");
  printf("||    M     M  A       A  N    NN  A       A  GGGGG  EEEEEE  M     M  EEEEEE  N    NN     T        ||\n");
  printf("\n");
  printf("||  				SSSSSS  Y   Y  SSSSSS  TTTTTTT  EEEEEE  MM   MM 		     ||\n");
  printf("||  				S        Y Y   S          T     E       M M M M    		     ||\n");
  printf("||  				SSSSSS    Y    SSSSSS     T     EEEE    M  M  M    		     ||\n");
  printf("||  				     S    Y         S     T     E       M     M    		     ||\n");
  printf("||  				SSSSSS    Y    SSSSSS     T     EEEEEE  M     M    		     ||\n");
  printf("||-------------------------------------------------------------------------------------------------||\n");
  printf("||-------------------------------------------------------------------------------------------------||\n\n");

}

void newuser()
{
	printf("You're a new user! Please enter the following details.\n\n");
	printf("---------------------------------------------\n");
	struct user *add=(struct user*)malloc(sizeof(struct user*));
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
	printf("Pick a strong password,Max characters 10.\nPlease enter a password for your user ID :: ");
	scanf("%s", var);
	strcpy(add->password,var);
	add->next=users;
    users=add;
}
char usrname[50];
void existinguser()
{
	struct user *temp=users;
	char p[10];
	printf("***********************************************************************************************\n");
	printf("You are an existing user! Please enter your Username and Password to view your account details.\n");
	printf("NOTE : your username is the name you entered while creating your user ID\n\nUSERNAME :: ");
	scanf("%s", usrname);
	printf("PASSWORD :: ");
	scanf("%s",p);
	while(temp!=NULL)
	{
		if(strcmp(temp->name,usrname)==0 && strcmp(temp->password,p)==0)
		{
			printf("Welcome %s. We are glad to have you back! We shall soon redirect you to the booking menu\n",usrname);
			delay(1000);
            		custmenu();
			break;
		}
		temp=temp->next;
	}


        printf("No user record found");
        customer();


}
void customer()
{
	printf("\n-----Customer menu-----\n1.New User\n2.Existing User\n3.Back to Main Menu\n4.Exit\n");
	printf("---------------------------------------------\nEnter an option (1-2-3-4) ::  ");
	int option;
	scanf("%d",&option);
	switch(option)
	{
		case 1 : newuser(); break;
		case 2 : existinguser(); break;
		case 3 : MainMenu();
		case 4 : exit(0);
		default : printf("\nInvalid option\n"); customer();
	}
	customer();
}


void add()
{
	FILE *f;
	f=fopen("add.txt","a+");
	if(f==0)
	{   f=fopen("add.txt","w+");
		system("clear");
		printf("Please hold on while we set our database in your computer!!");
		printf("\n Process completed press any key to continue!! ");
	}
	while(1)
	{
		system("cls");
		printf("\n Enter Customer Details:");
		printf("\n**************************");
		printf("\n Enter Room number:\n");
		scanf("\n%s",s.roomnumber);
		fflush(stdin);
		printf("Enter Name:\n");
		scanf("%s",s.name);
		printf("Enter Address:\n");
		scanf("%s",s.address);
		printf("Enter Phone Number:\n");
		scanf("%s",s.phonenumber);
		printf("Enter Email:\n");
		scanf(" %s",s.email);
		printf("Enter Period(\'x\'days):\n");
		scanf("%s",s.period);
		printf("Enter Arrival date(dd\\mm\\yyyy):\n");
		scanf("%s",s.arrivaldate);
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		printf("\n\n1 Room is successfully booked!!");
		printf("\n Press esc key to exit,  any other key to add another customer detail:");
		break;

	}
	fclose(f);
}
void list()
{
	FILE *f;
	int i;
	if((f=fopen("add.txt","r"))==NULL)
		exit(0);
	system("clear");
	printf("ROOM    ");
	printf("NAME\t ");
	printf("\tADDRESS ");
	printf("\tPHONENUMBER ");
	printf("\tEMAIL ");
	printf("\t\t  PERIOD ");
	printf("\t ARRIVALDATE \n");
	for(i=0;i<118;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		printf("\n%s \t%s \t\t%s \t\t%s \t%s  \t%s  \t     %s  \t  ",s.roomnumber, s.name , s.address , s.phonenumber ,s.email,s.period,  s.arrivaldate);
	}
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");
	fclose(f);
}

void delete1()
{
	FILE *f,*t;
	int i=1;
	char roomnumber[20];
	if((t=fopen("temp.txt","w"))==NULL)
	exit(0);
	if((f=fopen("add.txt","r"))==NULL)
	exit(0);
	system("cls");
	printf("Enter the Room Number of the hotel to be deleted from the database: \n");
	fflush(stdin);
	scanf("%s",roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{       i=0;
			continue;
		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{
		printf("\n\n Records of Customer in this  Room number is not found!!");
		fclose(f);
		fclose(t);//delay
		admin();
	}
	fclose(f);
	fclose(t);
	remove("add.txt");
	rename("temp.txt","add.txt");
	printf("\n\nThe Customer is successfully removed....");
	fclose(f);
	fclose(t);
}

void search()
{
system("clear");
	FILE *f;
	char roomnumber[20];
	int flag=1;
	f=fopen("add.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("Enter Room number of the customer to search its details: \n");
	scanf("%s", roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0){
			flag=0;
			printf("\n\tRecord Found\n ");
			printf("\nRoom Number:\t%s",s.roomnumber);
			printf("\nName:\t%s",s.name);
			printf("\nAddress:\t%s",s.address);
			printf("\nPhone number:\t%s",s.phonenumber);
			printf("\nEmail:\t%s",s.email);
			printf("\nPeriod:\t%s",s.period);
			printf("\nArrival date:\t%s",s.arrivaldate);
			flag=0;
			break;
		}
	}
	if(flag==1){
		printf("\n\tRequested Customer could not be found!");
	}
	fclose(f);
}
void searchname()
{
system("clear");
	FILE *f;
	char name[20];
	strcpy(name,usrname);
	int flag=1;
	f=fopen("add.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	int i=0;
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.name,name)==0){

			flag=0;
			printf("\n\tRecord Found: %d\n ",++i);
			printf("\nRoom Number:\t%s",s.roomnumber);
			printf("\nName:\t%s",s.name);
			printf("\nAddress:\t%s",s.address);
			printf("\nPhone number:\t%s",s.phonenumber);
			printf("\nEmail:\t%s",s.email);
			printf("\nPeriod:\t%s",s.period);
			printf("\nArrival date:\t%s",s.arrivaldate);
			flag=0;

		}
	}
	if(flag==1){
		printf("\n\tRequested Customer could not be found!");
	}
	fclose(f);
}


void edit()
{
 	FILE *f;
	int k=1;
	char roomnumber[20];
	long int size=sizeof(s);
	if((f=fopen("add.txt","r+"))==NULL)
		exit(0);
	system("clear");
	printf("Enter Room number of the customer to edit:\n\n");
	scanf("%[^\n]",roomnumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{
			k=0;
			printf("\nEnter Room Number     :");
			gets(s.roomnumber);
			printf("\nEnter Name    :");
			fflush(stdin);
			scanf("%s",s.name);
			printf("\nEnter Address        :");
			scanf("%s",s.address);
			printf("\nEnter Phone number :");
			scanf("%s",s.phonenumber);
			printf("\nEnter Email :");
			scanf("%s",s.email);
			printf("\nEnter Period :");
			scanf("%s",s.period);
			printf("\nEnter Arrival date :");
			scanf("%s",s.arrivaldate);
			fseek(f,size,SEEK_CUR);  //to go to desired position infile
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	if(k==1){
		printf("\n\nTHE RECORD DOESN'T EXIST!!!!");
		fclose(f);
	}else{
	fclose(f);
	printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
}
}






void admin()
{
    printf("\n********************\n-----Admin menu----\n1.Book a room \n2.Booking History \n3.Delete Booking \n4.Search a booking \n5.Edit a booking \n6.Main Menu\n******************\n");
    printf("Enter your selection");
    int op;
    scanf("%d",&op);
    switch(op)
    {
        case 1: add(); break;
        case 2: list();break;
        case 3: delete1();break;
        case 4: search();break;
        case 5: edit();break;
        case 6: MainMenu();
        default : printf("Invalid Selection");
            
    }
    admin();
}
void custmenu()
{
    printf("\n*****************\n----Booking Menu----\n1.Book a room \n2.Booking History \n3.Calendar \n4.Customer menu\n****************\n");
    printf("Enter your option ::");
    int op;
    scanf("%d",&op);
    switch(op)
    {
        case 1: add(); break;
        case 2: searchname(); break;
        case 3: cal(); break;
        case 4: customer();
        default: printf("invalid selection");
                custmenu();

    }
    custmenu();
}
void MainMenu()
{
	header();
	delay(100);
	system("clear");
	printf("**********************************************************************\n");
	printf("*********************\nWELCOME TO THE HOTEL\n*************************\n");
	printf("1)Customer Log in\n2)Admin Log in\n3)Exit\n");
	printf("**********************************************************************\n");
	printf("**********************************************************************\nPlease pick an option :: ");
	int option;
	scanf("%d",&option);
	switch(option)
	{
		case 1 : customer(); break;
		case 2 : admin(); break;
		case 3 : exit(0);
		default : printf("ERROR. You picked a wrong option. Redirecting you to Main Menu soon, please wait.\n\n"); delay(1000);
	}
	MainMenu();
}

int main()
{
	MainMenu();
	return 0;
}
