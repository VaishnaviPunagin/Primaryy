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
	add=(struct node*)malloc(sizeof(n));
	printf("\nEnter the value :: ");
	int v;
	scanf("%d",&v);
	add->value=v;
	add->next=NULL;
	return add;	
}

int numberofnodes()
{
	struct node *s=start;
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
	printf("\n----------\nLINKED LIST CONTENTS\n------------\n");
	struct node *s=start;
	int i=1;
	while(s!=NULL)
	{
		printf("%ld | %d --> %d | %ld \n",s,i,s->value,s->next);
		i++;		
		s=s->next;
	}
	printf("-------------\n");
}

void end()
{
	struct node *add=create();
	if(start==NULL)
		start=add;
	else
	{
		struct node *s=start;
		while(s->next!=NULL)
		{
			s=s->next;
		}
		s->next=add;
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
		struct node *s=start;
		printf("Valid Location! \n");
		int i=1;
		while(i<pos-1)
		{
			s=s->next;
			i++;		
		}
		struct node *add=create();
		add->next=s->next;
		s->next=add;
	}
	else
		printf("Loaction NOT VALID\n");
}

void front()
{
	
	struct node *add;
	add=create();
	add->next=start;
	start=add;
	
}

void delete()
{
	display();	
	printf("\nDeletion of  node!Enter the position of the node you want to delete :: ");
	int pos;
	scanf("%d",&pos);
	if(pos==1)
	{
		start=start->next;
	}
	else
	{
		struct node *a=start,*b;
		int n=numberofnodes(),i=1;
		if(pos<=n)
		{
			printf("Valid location haha xD\n");
			while(i<pos-1)
			{		
				a=a->next;
				i++;
			}
			b=a->next;
			a->next=b->next;
			free(b);
		}
				
	}
		
}

void search()
{
	struct node *s=start;
	int key,i=1,check=0;
	printf("What element do you want to look for :: ");
	scanf("%d",&key);
	while(s!=NULL)
	{
		if(s->value==key)
		{
			printf("\n%d elemnt found at position [%d] in the linked list!! \n",key,i);
			check=1;
		}
		s=s->next;
		i++;
	}
	if(check==0)
		printf("\nElement %d does not exist in your list ! not found :( \n",key);
}

int main()
{
	printf("Linked List implementation trial round\n");
	printf("\nShall we start making a linked list?! First node shall be created.\n");
	end();
	char d='y';
	while(d=='y')
	{
		printf("\n_________________\nLOTSA OPTIONS NOW !!!!!\n________________\n");
		printf("1.Insert a node at the beginning.\n2.Insert a node at some location.\n3.Insert a node at the end.\n4.Delete a node\n5.Display the list!\n6.Search for a value!\nPick an option (1-2-3-4-5-6) :: ");
		int i;
		scanf("%d",&i);
		switch(i)
		{
			case 1 : front(); break;
			case 2 : atloc(); break;
			case 3 : end(); break;
			case 4 : delete(); break;
			case 5 : display(); break;
			case 6 : search(); break;
			default : printf("ERROR!!!! ISSA WRONG CHOICE.\n\n");
		}
		printf("\n\nDo you want to continue?? say (y/n) ::  ");
		scanf(" %c",&d);
	
	}
	return 0;	
}
