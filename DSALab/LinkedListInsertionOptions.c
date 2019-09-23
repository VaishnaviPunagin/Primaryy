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
	
}

int numberofnodes()
{
	struct node *s;
	s=start;
	int i=0;
	while(s!=NULL)
	{
		i++;		
		s=s->next;
	}
	return i;
}

void display()
{
	printf("----------\nLINKED LIST CONTENTS\n------------\n");
	struct node *s;
	s=start;
	int i=1;
	while(s!=NULL)
	{
		printf("%ld | %d --> %d | %ld \n",s,i,s->value,s->next);
		i++;		
		s=s->next;
	}
	printf("---------------------------------------------\n");
}

void end()
{
	struct node n,*temp;
	temp=(struct node*)malloc(sizeof(n));
	printf("Enter value! \n");
	int v;
	scanf("%d",&v);
	temp->value=v;
	temp->next=NULL;
	if(start==NULL)
		start=temp;
	else
	{
		struct node *t;
		t=start;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=temp;
	}
}

void atloc()
{
	display();
	printf("Now, Tell me, at what location do you want to insert your value?! Enter a position! :: ");
	int pos;
	scanf("%d",&pos);
	int n=numberofnodes();
	printf("Number of nodes : %d \n",n);
	if(pos<=n)
	{
		struct node *s;
		s=start;
		printf("Valid Location! \n");
		int i=1;
		while(i<pos-1)
		{
			s=s->next;
			i++;		
		}
		struct node n,*temp;
		temp=(struct node*)malloc(sizeof(n));
		printf("\n-------\nEnter value! \n");
		int v;
		scanf("%d",&v);
		temp->value=v;
		temp->next=s->next;
		s->next=temp;
	}
	else
		printf("Loaction NOT VALID\n");
}

void front()
{
	
	struct node n,*temp;
	temp=(struct node*)malloc(sizeof(n));
	printf("Enter value! \n");
	int v;
	scanf("%d",&v);
	temp->value=v;
	temp->next=start;
	start=temp;
	
}

int main()
{
	printf("Linked List implementation trial round\n");
	printf("\nShall we start making a linked list?! First node shall be created.\n");
	end();
	char d='y';
	while(d=='y')
	{
		printf("\n_________________\nTo insert the next node, you have choices to make! Where would you like to insert your value??\n");
		printf("1.Insert at the beginning.\n2.Insert at some location.\n3.Insert at the end.\nPick an option (1-2-3) :: ");
		int i;
		scanf("%d",&i);
		switch(i)
		{
			case 1 : front(); break;
			case 2 : atloc(); break;
			case 3 : end(); break;
			default : printf("ERROR!!!! ISSA WRONG CHOICE.\n\n");
		}
		printf("Would you like to see your linked list? Say (y/n) :: ");
		char dis;
		scanf(" %c",&dis);
		if(dis=='y')
			display();
		printf("\n\nDo you want to continue?? say (y/n) ::  ");
		scanf(" %c",&d);
	
	}
	return 0;	
}
