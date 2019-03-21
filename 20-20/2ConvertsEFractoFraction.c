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

struct fraction addefracs(int en,struct efractions ef)
{
    int num=0,den=1,i;
    for(i=0;i<en;i++)
        den=den*ef.den[i];
    for(i=0;i<en;i++)
        num=num+(den/ef.den[i]);
    struct fraction f={num,den};
    return f;
}

void sumfractions(int n,int en,struct efractions e[n],struct fraction f[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        struct efractions ef=e[i];
        f[i]=addefracs(en,ef);
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
	sumfractions(n,en,e,f);
	display(n,f);
	return 0;
}
