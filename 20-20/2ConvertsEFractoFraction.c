#include<stdio.h>

struct fraction
{
	int num,den;
};

struct efracs
{
	int nd,den[100];
};

void testcases(int *n)
{
	printf("How many times ? ");
	scanf("%d",n);
}

void inputefracs(int n,struct efracs e[n])
{
	for(int i=0;i<n;i++)
	{
		printf("How many denominators for case %d : ",i);
		scanf("%d",&e[n].nd);
		for(int j=0;j<e[n].nd;j++)
		{
			printf("Enter den %d for case %d : ",j,i);
			scanf("%d",&e[i].den[j]);
		}
	}
}

void add(int n,struct efracs e[n],struct fraction f[n])
{
    for(int i=0;i<n;i++)
    {
        struct efracs ef=e[i];
        f[i]=addefracs(ef);
    }

for(int i=0;i<n;i++)
    {
        
        printf("SUM IS %d/%d \n",f[i].num,f[i].den);
    }

}

struct fraction addefracs(struct efracs ef)
{
	int num=0,den=1,i;
    for(int i=0;i<ef.nd;i++)
        den=den*ef.den[i];
    for(int i=0;i<ef.nd;i++)
        num=num+(den/ef.den[i]);
    struct fraction f={num,den};
    return f;
}

int main()
{
	int n;
	testcases(&n);
	struct fraction f[n];
	struct efracs e[n];
	inputefracs(n,e);
	add(n,e,&f);
	return 0;
}
