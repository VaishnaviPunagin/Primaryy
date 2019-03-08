#include<stdio.h>
//FIBONACCI SERIES
void input(int *n)
{
	      printf("This program will generate the Fibonacci series. Hoe many terms do you want?");
	      scanf("%d",n);
}

void compute(int n, int a[])
{
	      a[0]=0;
	      a[1]=1;
	      for(int i=2;i<n;i++)
		          a[i]=a[i-1]+a[i-2];
	
}

void output(int n, int a[])
{
	      printf("The fibonacci series of %d terms  :   \n",n);
	      for(int i=0;i<n;i++)
		    printf("%d\n",a[i]);
}

int main()
{
	      int n;
	      input(&n);
	      int a[n];
	      compute(n,a);
	      output(n,a);
	      return 0;
}
