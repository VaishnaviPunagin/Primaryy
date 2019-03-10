#include<stdio.h>

void input(int *n,int *r)
{
	printf("Enter two values n and r. This program will calculate nCr and nPr .\n");
	scanf("%d %d",n,r);
}

float fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
		f=f*i;
	return f;
}

float calpermutation(int n, int r)
{
	float p;
	p=fact(n)/(fact(n-r));
	return p;
}

float calcombination(int n, int r)
{
	float c;
	c=fact(n)/(fact(r)*fact(n-r));
	return c;
}

void output(float p,float c)
{
	printf("nPr and nCr for the entered values of n and r are : \n");
	printf("Permutation : %.2f\n",p);
	printf("Combination : %.2f\n",c);
}



int main()
{
	int n,r;
	float permutation,combination;
	input(&n,&r);
	combination=calcombination(n,r);
	permutation=calpermutation(n,r);
	output(permutation,combination);
	return 0;
	
}
