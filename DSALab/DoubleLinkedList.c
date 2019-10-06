#include<stdio.h>
#include<stdlib.h>

struct node
{
	int value;
	struct node *right,*left;
};

struct node *start=NULL;

struct node *create()
{
	struct node *add;
	add=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the value ::  ");
	int v;
	scanf("%d",&v);
	add->value=v;
	add->right=add->left=NULL;
	return add;
}

int howmanynodes()
{
	int c=1;
	struct node *s=start;
	while(s!=NULL)
	{
		s=s->right;
		c++;
	}
	return c;
}

void front()
{
	struct node *add=create();
	start->left=add;
	add->right=start;
	start=add;
}

void atloc()
{
	int pos,n=howmanynodes();
	printf("At what location do you want to inset your node ! Please enter a number : ");
	scanf("%d",&pos);
	if(pos==1)
		front();
	else if(pos==n)
		endd();
	else if(pos>n)
		printf("Invalid locaton entered. Try again\n");
	else
	{
		int i=1;
		struct node *a=start,*b,*add=create();
		while(i!=pos-1)
		{
			a=a->right;
			i++;
		}
		b=a->right;
		a->right=add;
		add->left=a;
		add->right=b;
		b->left=add;
		printf("Job Done!\n");
	}
}

void endd()
{
	struct node *s=start,*add=create();
	while(s->right!=NULL)
		s=s->right;
	s->right=add;
	add->left=s;
}

void display()
{
	printf("\n--------\nDouble Linked List\n---------\n");
	struct node *s=start;
	while(s!=NULL)
	{
		printf("%ld | %ld -- %d | %ld\n",s->left,s,s->value,s->right);
		s=s->right;
	}
}

int main()
{
	printf("HELLO! Welcome to the implementation of Double Linked List !\n----------\nLet's make our first node!\n");
	start=create();
	char c='y';
	while(c=='y')
	{
		printf("----------\nPick an option\n----------\n1.Insert at the front\n2.Insert at some location\n3.Insert at the end\n4.Delete\n5.Display\n---------\nEnter your choice :: ");
		int op;
		scanf("%d",&op);
		switch(op)
		{
			case 1 : front(); break;
			case 2 : atloc(); break;
			case 3 : endd(); break;
			//case 4 : delete(); break;
			case 5 : display(); break;	
		}
		printf("\nWould you like to perform another set of operations? Say (y/n) :: ");
		scanf(" %c",&c);
	}
	return 0;
}
