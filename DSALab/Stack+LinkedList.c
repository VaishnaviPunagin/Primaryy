#include<stdio.h>
#include<stdlib.h>

struct node
{
	int value;
	struct node *next;
}; 

struct node *start=NULL;

struct node *create()
{
	struct node *add,n;
	add=(struct node *)malloc(sizeof(n));
	printf("\nEnter the value : ");
	int v;
	scanf("%d",&v);
	add->value=v;
	add->next=NULL;
	return add;
}

void push()
{
	struct node *add=create();
	if(start==NULL)
		start=add;
	else
	{
		struct node *s=start;
		start=add;
		add->next=s;
	}
}

void pop()
{
	if(start==NULL)
		printf("Stack list is empty. How do you expect me to delete HUH\n");
	else
	{
		printf("Deleted value is :: %d.\n",start->value);
		start=start->next;
	}
}

void display()
{
	printf("\nStack contents are :: \nTOP-->");	
	if(start==NULL)
		printf("------EMPTY-----\n");
	else
	{
		struct node *s=start;
		while(s!=NULL)
		{
			printf(" | %d ",s->value);
			s=s->next;
		}
		printf("\n");
	}
}

int main()
{
	printf("Implementation of Stack using linked list! \n");
	char c='y';
	while(c=='y')
	{
		printf("-----------\nPick an option :: \n1.Push\n2.Pop\n3.Display\n----------\nWhat do you want to do ?  ");
		int o;
		scanf("%d",&o);
		switch(o)
		{
			case 1 : push(); break;
			case 2 : pop(); break;
			case 3 : display(); break;
			default : printf("\nWhat did you pick? issa wrong.\n");
		}
		printf("\nDo you want to do more stuff? ");
		scanf(" %c",&c);
	}
	return 0;
	
}
