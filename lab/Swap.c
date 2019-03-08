#include<stdio.h>

void input(int *a, int *b)
{
      printf("Enter two numbers\n");
      scanf("%d %d",a,b);
}

void compute(int *a,int *b)
{
      int s=*a;
      *a=*b;
      *b=s;
}

void output(int a,int b)
{
      printf("\nNumbers stored are :  a=%d  and  b=%d .\n",a,b);
}

void main()
{
      int a,b,c;
      input(&a,&b);
      output(a,b);
      compute(&a,&b);
      output(a,b);
}
