
#include<stdio.h>

struct fraction
{
    int num,den;
};

void inputn(int *n)
{
      printf("How many fractions do you want to add ?\n");
      scanf("%d",n);
}

void input(int n,struct fraction f[])
{
      for(int i=0;i<n;i++)
      {
            printf("Enter value of numerator %d : ",i+1);
            scanf("%d",&f[i].num);
            printf("Enter value of denominator %d : ",i+1);
            scanf("%d",&f[i].den);
            printf("\n");
      }
}

struct fraction add(int n,struct fraction f[])
{
      int i,num=0,den=1;
      for(i=0;i<n;i++)
            den=den*f[i].den;
      for(i=0;i<n;i++)
            num=num+((f[i].num*den)/f[i].den);
      struct fraction sum={num,den};
      return sum;
}

void output(struct fraction sum)
{
        printf("SUM IS %d / %d .",sum.num,sum.den);
}

int main()
{
      int n;
      inputn(&n);
      struct fraction f[n];
      input(n,f);
      struct fraction result=add(n,f);
      output(result);
      return 0;
}
