//Evaluation of Postfix Expression

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

char s[100],top=-1;

void push(char x)
{
	top++;
	s[top]=x;	
}

char pop()
{
	if(top==-1)
		printf("1Entered expression is probably wrong, Something in it doesnt add up right.\n");
	else 
	{
		int value=s[top];
		top--;
		return value;
	}
}

int operator(char o)
{
	if(o == '^' || o == '*' || o == '/' || o == '+' || o =='-')
		return 1;
	else
		return 0;
}

void evaluate(char p[])
{
	int i=0;
	char x=p[i];
	push('(');
	strcat(p,")");
	while(x!=')')
	{
		if( isalpha(x) || isdigit(x) )
			push(x-48);
		if(operator(x)==1)
		{
			int a=pop(),b=pop(),value; 
			switch(x)
			{
				case '+' : value=b+a; break;
				case '-' : value=b-a; break;
				case '*' : value=b*a; break;
				case '/' : value=b/a; break;
				case '^' : value=b^a; break;
				default : printf("Something is WRONG!!!!\n\n");
			}
			push(value);
		}
		i++;
		x=p[i];
	}
	int r=pop();
	printf("The entered postfix expression has been successfully read, and HOPEFULLY evaluated.\n\nRESULT :: %d .\n\n",r);
}

int main()
{
	printf("Welcome to the code that helps you do oyur homework.\nThis program evaluates an entered Postfix expression.\nPlease enter a Postfix expression {Enter a ')' to end the expression} :: \n ");
	char p[100];
	scanf("%s",p);
	evaluate(p);
	return 0;
}
