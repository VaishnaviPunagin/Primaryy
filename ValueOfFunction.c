#include<stdio.h>
#include<math.h>

void inputpow(int *n)
{
	    printf("Enter the degree of the polynomial.");
	    scanf("%d", n);
}

void inputcoeff(int n, int a[])
{
	    for(int i=0;i<=n;i++)
		    {
			      printf("Enter coefficient for %d th term   :   ",i+1);
			      scanf("%d",&a[i]);
		    }
}

void inputx(int *x)
{
	     printf("Enter a value for base (x) in your polynomial function  :  ");
	     scanf("%d",x);
}

int compute(int x, int n, int a[])
{
	    int i,function=0;
	    for(i=n;i>=0;i--)
		      function = function + (a[i]*pow(x,i));
	    return function;
}

void output(int value)
{
	    printf("THE VALUE OF FNCION IS %d   :   ",value);
}

int main()
{
	    int n,x;
	    inputpow(&n);
	    int coeff[n];
	    inputcoeff(n,coeff);
	    inputx(&x);
	    int value=compute(x,n,coeff);
	    output(value);
	    return 0;
}
