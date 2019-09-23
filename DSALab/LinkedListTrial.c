#include<stdio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node *next;
};

void display(struct node *start)
{
	printf("LINKED LIST CONTENTS\n\n");
	struct node *s;
	s=start;
	int i=0;
	while(s!=NULL)
	{
		printf("%d --> %d\n",i,start->value);
		i++;		
		s=s->next;
	}
}

struct node createnode()
{
	struct node n,*start;
	start=(struct node*)malloc(sizeof(n));
	printf("Enter value! \n");
	int v;
	scanf("%d",&v);
	n.value=v;
	start->next=NULL;
	return *start;
}

int main()
{
	printf("Linked List implementation trial round\n");
	char c='y';
	while(c=='y')
	{
		printf("Next, an element shall be inserted into the list! \n");
		struct node *start;
		start=createnode();
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
