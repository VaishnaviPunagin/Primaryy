#include<stdio.h>
#include<math.h>

//value of a functin using horners' method

void inputpow(int *n)
{
	    printf("Enter the degree of the polynomial.");
	    scanf("%d", n);
}

void inputcoeff(int n, int a[])
{
	    for(int i=0;i<=n;i++)
		  {
			      printf("Enter coefficient for term of %d power of x   :   ",i+1);
			      scanf("%d",&a[i]);
		  }
}

void inputx(int *x)
{
	    printf("Enter a value for base (x) in your polynomial function  :  ");
	    scanf("%d",x);
}

int horner(int x, int n, int a[])
{
	    int value = a[n];
	    for (int i=1; i<=n; i++) 
        	value = value*x + a[i]; 
      return value; 
}

void output(int value)
{
	    printf("THE VALUE OF FUNCTION IS %d   :   ",value);
}

int main()
{
	    int n,x;
	    inputpow(&n);
	    int coeff[n];
	    inputcoeff(n,coeff);
	    inputx(&x);
	    int value=horner(x,n,coeff);
	    output(value);
	    return 0;
}
