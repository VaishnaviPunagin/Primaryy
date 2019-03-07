//smallest of three numbers using nested if

#include<stdio.h>

void in(int *x, int *y, int *z)
{
      printf("Enter the three numbers, I shall determine the smallest of them.\n");
      scanf("%d %d %d",x,y,z);
}

int com(int a,int b, int c)
{
      if(a<b)
          if(a<c) return a;
          else return c;
      else
          if(b<c) return b;
          else return c;
}

void op(int z)
{
      printf("\nSmallest of the three entered numbers is %d \n",z);
}

void main()
{
      int a,b,c,s;
      in(&a,&b,&c);
      s=com(a,b,c);
      op(s);
}



