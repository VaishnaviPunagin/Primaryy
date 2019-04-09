#include<stdio.h>

struct fraction
{
	int num,den;
};

int howmany()
{
	int n;
	printf("How many fractions do you want to enter? ");
	scanf("%d",&n);
	return n;
}

void getfractions(int n,struct fraction fract[n])
{
	for(int i=0;i<n;i++)
	{
		printf("Enter numerator for fraction %d : ",i);
		scanf("%d",&fract[i].num);
		printf("Enter denominator for fraction %d : ",i);
		scanf("%d",&fract[i].den);
	}
}

struct fraction add(int n,struct fraction fract[n])
{
	int num=0,den=1;
	for(int i=0;i<n;i++)
		den=den*fract[i].den;
	for(int i=0;i<n;i++)
		num=num+(fract[i].num*(den/fract[i].den));
	struct fraction sum={num,den};
	return sum;		
}

void display(struct fraction sum)
{
	printf("SUM IS %d / %d .\n",sum.num,sum.den);
}

int main()
{
	int n=howmany();
	struct fraction fract[n];
	getfractions(n,fract);
	struct fraction sum=add(n,fract);
	display(sum);
	return 0;
}
