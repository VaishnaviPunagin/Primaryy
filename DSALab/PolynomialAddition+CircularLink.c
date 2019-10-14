#include<stdio.h>
#include<stdlib.h>

struct term 
{
	int coefficient,exp;
	struct term *next;
};

struct term *a=NULL,*b=NULL,*sum=NULL,*sub=NULL;

struct term *create()
{
	struct term *add,t;
	add=(struct term *)malloc(sizeof(t));
	int c,e;
	printf("Enter exponent  :: ");
	scanf("%d",&e);
	printf("Enter coefficient  :: ");
	scanf("%d",&c);
	add->exp=e;
	add->coefficient=c;
	add->next=NULL;
	return add;
}

void add()
{
	struct term *ap=a,*bp=b;
	while(ap!=NULL && bp!=NULL)
	{	
		if(ap->exp > bp->exp)
		{
			struct term *sadd;
			sadd=(struct term *)malloc(sizeof(struct term));
			sadd->coefficient=ap->coefficient;
			sadd->exp=ap->exp;
			sadd->next=NULL;
			if(sum==NULL)
			{
				sum=sadd;
				sadd->next=sum;
			}
			else
			{
				struct term *s=sum;
				while(s->next!=sum)
					s=s->next;
				s->next=sadd;
				sadd->next=sum;
			}	
			ap=ap->next;
		}
		else if(ap->exp==bp->exp)
		{
			int s;
			struct term *sadd;
			sadd=(struct term *)malloc(sizeof(struct term));
			s=ap->coefficient+bp->coefficient;
			sadd->coefficient=s;			
			sadd->exp=ap->exp;
			sadd->next=NULL;
			if(sum==NULL)
			{
				sum=sadd;
				sadd->next=sum;
			}
			else
			{
				struct term *s=sum;
				while(s->next!=sum)
					s=s->next;
				s->next=sadd;
			}
			ap=ap->next;
			bp=bp->next;

		}
		else if(ap->exp < bp->exp)
		{
			struct term *sadd;
			sadd=(struct term *)malloc(sizeof(struct term));
			sadd->coefficient=bp->coefficient;
			sadd->exp=bp->exp;
			sadd->next=NULL;
			if(sum==NULL)
			{
				sum=sadd;
				sadd->next=sum;
			}
			else
			{
				struct term *s=sum;
				while(s->next!=sum)
					s=s->next;
				s->next=sadd;
				sadd->next=sum;
			}	
			bp=bp->next;
		}
	}
}

void display(struct term *p)
{
	printf("\n\nTHIS IS POLYNOMIAL\n");
	struct term *pp=p;
	printf(" | %d * x ^ %d |\n",pp->coefficient,pp->exp);
	pp=pp->next;
	while(pp!=p)
	{
		printf(" | %d * x ^ %d |\n",pp->coefficient,pp->exp);
		pp=pp->next;
	}
}


int main()
{
	printf("GIVE TWO POLYNOMIALS> WE'LL DO SOMETHING WITH THEM.\n");
	for(int i=1;i<3;i++)
	{
		printf("NUMBER %d trial ::\n\n",i);
		int n;
		printf("How many terms does polynomial have? Tell me.  ");
		scanf("%d",&n);
		printf("NOTE :: PLEASE ENTER EXPONENTS FROM THE HIGHEST TO LOWEST EXP.\n");
		for(int j=1;j<=n;j++)
		{
			struct term *add=create();
			
			if(i==1)
			{
				if(a==NULL)
				{
					a=add;
					add->next=a;
				}
				else
				{
					struct term *x=a;
					while(x->next!=a)
						x=x->next;
					x->next=add;
					add->next=a;
				}
			}
			if(i==2) 
			{
				if(b==NULL)
				{
					b=add;
					add->next=b;
				}
				else
				{
					struct term *x=b;
					while(x->next!=b)
						x=x->next;
					x->next=add;
					add->next=b;
				}
			}
		}
	}
	printf("\nPOLYNOMIAL 1 IS :: ");
	display(a);
	printf("\nPOLYNOMIAL 2 IS :: ");
	display(b);
	printf("\nINPUT TAKEN, THANKSSSSS\n\nNow, LETS ADD THEMMMMMMMm\n\n");
	add();
	
	printf("\n\nHOPEFUKLLY THE SUM IS :: ");
	display(sum);
	return 0;
}
