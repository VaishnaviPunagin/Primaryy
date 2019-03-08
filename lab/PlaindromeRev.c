#include<stdio.h>

void input(int *num)
{
	      printf("Enter a number. This program shall reverse it and then determine if it is a palindrome.\n");
	      scanf("%d",num);
}

void findreverse(int num,int *temp,int *reverse)
{
	      *temp=num;
	      *reverse=0;
	      while(num!=0)
	      {
		          int d=num%10;
		          *reverse=(*reverse*10)+d;
		          num=num/10;
	      }
}

void output(int temp, int reverse)
{
	      if(temp==reverse)
		          printf("Entered number is a Palindrome, and the reverse is %d .\n",reverse);
	      else
		          printf("Not a Palindrome number; the reverse is %d .\n",reverse);
}

int main()
{
	      int num,temp,reverse;
	      input(&num);
	      findreverse(num,&temp,&reverse);
	      output(temp,reverse);
	      return 0;

}
