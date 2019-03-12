#include<stdio.h>

void input(float *time,char *type)
{
	printf("____________________\n");
	printf("C/c for Car.\n");
	printf("B/b for Bus.\n");
	printf("T/t for Tempo.\n");
	printf("Based on the above mentioned details,Please enter the type of your vehicle :  ");
	scanf("%c",type);
	printf("Enter the amount of time you parked your vehicle for, IN HOURS. NOTE:one and a half hour=1.5 hours.\n");
	scanf("%f",time);
}


float calfare(float time,char type)
{
	float fare;
	switch(type)
	{
		case 'c':
		case 'C':         if(time<=2)
				  {
					fare=time*20;
					type=fare;
				  }
				  else
				  {
				   	fare=(2*20)+((time-2)*30);
					type=fare;
				  }
				  break;
		case 'b':
		case 'B':	  if(time<=4)
				  {
					fare=time*40;
					type=fare;
				  }
				  else
				  {
				   	fare=(4*40)+((time-4)*50);
					type=fare;
				  }
				  break;
		case 't':
		case 'T': 	  if(time<=3)
				  {
					fare=time*30;
					type=fare;
				  }
				  else
				  {
				   	fare=(3*30)+((time-3)*40);
					type=fare;
				  }
				  break;
		default : printf("ERROR. Invalid entries. Try again.\n");
	}
	return type;
}

void output(float bill)
{
	printf("Please pay an amount of Rs %.2f  for the parking. \n",bill);
}

int main()
{
	float time,bill;
	char type;
	input(&time,&type);
	bill=calfare(time,type);
	output(bill);
}
