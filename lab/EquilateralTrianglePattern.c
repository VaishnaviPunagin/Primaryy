#include<stdio.h>

//EQUILATERAL TRIANGLE PATTERN

void input(int *n)
{
	      printf("Enter number of rows! \n");
	      scanf("%d",n);
}

void output(int n)
{
	      int j,i;
	      for(i=1;i<=n;i++)
	      {
		          for(j=i;j<n;j++)
			              printf(" ");
		          for(j=1;j<=(2*i-1);j++)
			              printf("*");
		          printf("\n");
	      }
}

void main()
{
	      int n;
	      input(&n);
	      output(n);
}



    
