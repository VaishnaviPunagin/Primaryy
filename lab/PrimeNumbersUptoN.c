#include<stdio.h>

void inputn(int *n)
{
	printf("This program shall generate prime numbers. Please set a maximum limit.\n");
	scanf("%d",n);
}	

int genprime(int n ,int a[])
{
	int i,j;
	int count=0;
		for(i=2;i<=n;i++)
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)
					break;
			}
			if(i==j)
			{			
				a[count]=i;
				count++;
			}
		}
	return count;	
}

void output(int count,int a[])
{
	printf("Prime numbers until the specified limit are : \n");	
	for(int i=0;i<count;i++)
		printf("%d\n",a[i]);
}

int main()
{
	int n,count;
	inputn(&n);
	int a[1000];
	count=genprime(n,a);
	output(count,a);
	return 0;

}
