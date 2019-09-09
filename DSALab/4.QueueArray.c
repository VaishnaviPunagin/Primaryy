#include<stdio.h>
int q[100],front=-1,rear=-1;

void insert()
{
	if(rear>=100)
		printf("No more space lef tin the alloted queue array. No more insertions are possible.\n\n");
	else
	{
		if(front==-1)
			front++;
		rear++;
		int value;
		printf("Enter the value to be insertedinto the queue ::  ");
		scanf("%d",&value);
		q[rear]=value;
	}
}

void delete()
{
	if (front==-1 || front>rear)
		printf("Queue is empty! NO more elements to be deleted.\n\n");
	else
	{
		printf("Deleted element ::  %d .\n",q[front]);
		front++;
	}

}

void display()
{
	printf("\nThe Queue looks like this \n front :: ");
	for(int i=front;i<=rear;i++)
		printf(" %d ",q[i]);
	printf(" :: rear.\n\n");
}

int main()
{
	char c='y';
	while(c=='y')
	{
		printf("\nWELCOME TO THE DEMONSTRATION OF QUEUE!!!!\n_______QUEUE MENU________\n1. ENQUEUE : insert one element into the queue\n2. DEQUEUE : delete one element from your queue\n3. DISPLAY\nPick an option (1-2-3) to perform a task!\n\nEnter your choice :  ");
		int o;
		scanf("%d",&o);
		switch(o)
		{
			case 1 : insert(); break;
			case 2 : delete(); break;
			case 3 : display(); break;
			default : printf("ERROR! Wronmg option number enetered. Try again!\n");
		}
		printf("\n\nWould you like to continue working on the queue? please enter a (y/n) ::  ");
		scanf(" %c",&c);

	}
	return 0;	

}
