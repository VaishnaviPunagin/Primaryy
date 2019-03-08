#include<stdio.h>
#include<math.h>

void input(int *num)
{
	      printf("Enter a number. This program shall determine if it is an armstrong.\n");
	      scanf("%d",num);
}

void inputdigits(int *n)
{
	      printf("Enter number of digits in the entered number.\n");
	      scanf("%d",n);
}

void checkarm(int num,int n,int *temp,int *a)
{
	      *temp=num;
	      *a=0;
	      while(num!=0)
	      {
		          int d=num%10;
		          *a+=pow(d,n);
		          num=num/10;
	      }
}

void output(int temp, int a)
{
	      if(temp==a)
		          printf("%d is an Armstrong number .\n",a);
	      else
		          printf("%d is NOT an Armstrong number .\n",temp);
}

int main()
{
	      int num,temp,a,n;
	      input(&num);
	      inputdigits(&n);
	      checkarm(num,n,&temp,&a);
	      output(temp,a);
	      return 0;

}
