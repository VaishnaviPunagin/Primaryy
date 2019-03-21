#include<stdio.h>

struct fraction
{
	int num,den;
};

struct efractions
{
	int den[1000];
};

int testcases(int *n)
{
	printf("How many trials? \n");
	scanf("%d",n);
}

void getefractions(int n,int *en,struct efractions e[n])
{
	for(int i=0;i<n;i++)
	{
		printf("How many egyptian fractions will you enter  :  ");
		scanf("%d",en);
		for(int j=0;j<*en;j++)
		{
			printf("Enter denominator for %d numbered fraction : ",j);
			scanf("%d",&e[i].den[j]);
		}	
	}
}

struct fraction addefractions(int en,struct efractions ef[en])
{
	int j,den=1,num=0;
	int x[en];
	for(j=0;j<en;j++)
		{
			x[j]=ef[j].den;
		}					
	for(j=0;j<en;j++)
		den=den*x[j];
	for(j=0;j<en;j++)
		num=num+(den/x[j]);
	struct fraction f={num,den};
	return f;
}


void getsumfractions(int n,int en,struct efractions e[n],struct fraction f[n])
{
	for(int i=0;i<n;i++)
	{
		struct efractions ef=e[i];
		f[i]=addefractions(en,e);
	}	
}

void display(int n,struct fraction f[n])
{
	for(int i=0;i<n;i++)
	{
		printf("\nSUM IS %d/%d .",f[i].num,f[i].den);
	}

}



int main()
{
	int n,en;
	testcases(&n);
	struct efractions e[n];
	struct fraction f[n];
	getefractions(n,&en,e);
	getsumfractions(n,en,e,f);
	display(n,f);
	return 0;
}
