//largest of three numbers 

#include<stdio.h>

void in(int *x, int *y, int *z)
{
      printf("Enter the three numbers, I shall determine the largest of them.\n");
      scanf("%d %d %d",x,y,z);
}

int com(int a,int b, int c)
{
      int max=a;
      if(b>max) max=b;
      if(c>max) max=c;
      return max;
}

void op(int m)
{
      printf("\nLargest of the three entered numbers is %d \n",m);
}

void main()
{
      int a,b,c,m;
      in(&a,&b,&c);
      m=com(a,b,c);
      op(m);
}
