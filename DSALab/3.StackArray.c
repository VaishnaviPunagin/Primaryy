#include<stdio.h>
int top=-1;
void push(int max, int a[])
{
	if(top<max-1)
	{
		top++;		
		int value;
		printf("\nEnter the value you want to enter into the stack\n");
		scanf("%d",&value);
		a[top]=value;
	}
	else
		printf("The stack is FULL. You cannot enter any more values into the stack.\n");
}

void pop(int max, int a[])
{
	if(top==-1)
		printf("The stack is empty, there are no more elemnts left to delete/pop\n");
	else
	{
		printf("This is the element you just delted : %d \n",a[top]);
		top--;
	}
}

void display(int max, int a[])
{
	if(top==-1)
		printf("The stack is empty, No elements to display! \n");
	else 
	{	
		printf("The current stack looks like this ! \n");
		for(int i=0;i<=top;i++)
			printf(" | %d | ",a[i]);
		printf("\n");
	}
}

int main()
{
	char choice='y';
	int max;
	printf("Please enter a maximum size of elements in the stack you want to create! \n NOTE THAT THIS SIZE CANNOT BE CHANGED IN A SINGLE PROGRAM RUN.\nHowever, you can perfom operations on the stack you create based on this ONE FIXED SIZE only.\n");
	scanf("%d",&max);
	int a[max];
	while(choice=='y')
	{
		int op;
		printf("\nWELCOME TO STACK MENU !!!!\n__________\n 1. PUSH - inserts element\n 2. POP - deletes element\n 3. DISPLAY\n_________\nPlease enter an option from the above menu (1-2-3) that you want to perform :  ");
		scanf("%d",&op);
		switch(op)
		{
			case 1 : push(max,a);
				 break;

			case 2 : pop(max,a);
				 break;

			case 3 : display(max,a);
				 break;

			default : printf("ERROR. Please enter a valid choice next time. \n");
				  break;
		}
		printf("Would you like to perform any further operations???? Say (y/n) : ");
		scanf("\n%c",&choice);
	}
	return 0;
}
