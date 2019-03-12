#include<stdio.h>
#include<math.h>

void input(int *num)
{
	      printf("Enter a number. This program shall determine if it is an armstrong.\n");
	      scanf("%d",num);
}

int finddigits(int num)
{
	int n=0;
	while (num!=0)
	{
		num=num/10;
		n++;
	}	    
	return n;  
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
	      n=finddigits(num);
	      checkarm(num,n,&temp,&a);
	      output(temp,a);
	      return 0;

}
