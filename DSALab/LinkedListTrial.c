#include<stdio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node *next;
};

struct node *start=NULL;

void display(struct node *start)
{
	printf("LINKED LIST CONTENTS\n\n");
	struct node *s;
	s=start;
	int i=1;
	while(s!=NULL)
	{
		printf("%d --> %d\n",i,s->value);
		i++;		
		s=s->next;
	}
}

void createnode()
{
	struct node n,*temp;
	temp=(struct node*)malloc(sizeof(n));
	printf("Enter value! \n");
	int v;
	scanf("%d",&v);
	temp->value=v;
	if(start==NULL)
		start=temp;
	else
	{
		struct node *t;
		t=start;
		while(t!=NULL)
		{
			t=t->next;
		}
		t->next=temp;
	}
}

int main()
{
	printf("Linked List implementation trial round\n");
	char c='y';
	while(c=='y')
	{
		printf("Next, an element shall be inserted into the list! \n");
		createnode();
		printf("Do you want to see the contents of the list? Say (y/n) :: ");
		char o;
		scanf(" %c",&o);
		if(o=='y')
			display(start);
		printf("Continue adding elements? say (y/n) :: ");
		scanf(" %c",&c);
	}
	return 0;	
}
