#include<stdio.h>


void input(int *n)
{
	printf("How many prime numbers do you want? \n");
	scanf("%d",n);
}


void generateprime(int n, int a[],int flag, int b[])
{
	for(int i=0;i<n;i++)
	{
		int flag=0;
		for(int j=2;j<i;j++)
		{
			if(j%i==0)
				{
					flag==1;
				}
			
		}
		for(int k=0;k<n;k++)
			if(flag==0)
			    b[k]=i;	
	}	
	
}

void output(int n, int b[])
{
	for(int i=0;i<n;i++)
		printf("%d\n",b[i]);
}

int main()
{
	int n,flag=0;
	input(&n);
	int a[n]; int b[n];
	generateprime(n,a,flag,b);
	output(n,b);
	return 0;

}
