#include<stdio.h>

void inputn(int *n)
{
      printf("How many numbers do you want to add?\n");
      scanf("%d",n);
}

void input(int n,int a[])
{
      int i;
      for(i=0;i<n;i++)
      {
          printf("\nEnter number  :  ");
          scanf("%d",&a[i]);
      } 
}
int compute(int n, int a[])
{
      int i,s=0;
      for(i=0;i<n;i++)
      s+=a[i];
      return s;
}

void op(int s)
{
      printf("SUM OF ENTERED NUMBERS IS  : %d \n",s);
}

void main()
{
      int n,s;
      inputn(&n);
      int a[n];
      input(n,a);
      s=compute(n,a);
      op(s);
}
