#include<stdio.h>

void inputn(int *n)
{
	printf("This program shall generate prime numbers. Please set a maximum limit.\n");
	scanf("%d",n);
}	

void genprime(int n ,int a[],int *count)
{
	int i,j;
	*count=0;
		for(i=2;i<=n;i++)
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)
					break;
			}
			if(i==j)
			{			
				a[*count]=i;
				*count++;
			}
		}

	
	
}

void output(int count,int a[])
{
	for(int i=0;i<count;i++)
	printf("%d\n",a[i]);
}

int main()
{
	int n,count;
	inputn(&n);
	int a[100];
	genprime(n,a,&count);
	output(count,a);
	printf("THIS WORKS ???");
	return 0;

}
