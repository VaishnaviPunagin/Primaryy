#include<stdio.h>
#include<time.h>

int factorial(int x)
{
	int f=1;
	for(int i=1;i<=x;i++)
		f=f*i;
	return f;
}

int main()
{
	clock_t start;
	int n,r,p,c,fn,fnr,fr;
	printf("Enter values for n and r\n");
	scanf("%d %d",&n,&r);
	start=clock();
	fn=factorial(n);
	fnr=factorial(n-r);
	fr=factorial(r);
	p=fn/fnr;
	c=fn/(fr*fnr);
	printf("For the entered n and r : \nPermutation : %d \nCombination : %d\n",p,c);
	start=clock()-start;
	double t=((double)start/CLOCKS_PER_SEC);
	printf("Time taken TotalTime: %lf",t);
	return 0;
}
