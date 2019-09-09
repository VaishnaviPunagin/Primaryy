#include<stdio.h>
#include<stdlib.h>    
#include<ctype.h>     
#include<string.h>

char stack[100];
int top=-1;

void push(char item)
{
	top++;
	stack[top] = item;
}

char pop()
{
	if(top <0)
	{
		printf("\n3Error, you probably have entered a wrong expression.\n"); 
		exit(1);
	}
	else
	{
		char c;
		c=stack[top];
		top--;
		return c;
	}
}

int isop(char o)
{
	if(o == '^' || o == '*' || o == '/' || o == '+' || o =='-')
		return 1;
	else
		return 0;
}

int order(char o)
{
	if(o=='^')
		return 3;
	else if(o=='*' || o=='/')
		return 2;
	else if(o=='+' || o=='-') 
		return 2;
	else
		return 0;
}

void convert(char ip[], char op[])
{ 
	int i=0,j=0;
	char c,x;
	c=ip[i]; 
	push('(');
	strcat(ip,")");        
	while(c != '\0')        
	{
		if(c== '(')
			push(c);
		else if(isdigit(c) || isalpha(c))
		{
			op[j]=c;              
			j++;
		}
		else if(isop(c)==1)        
		{
			x=pop();
			while(isop(x)==1 && order(x)>=order(c))
			{
				op[j]=x;   
				j++;
				x = pop();
			}
			push(x);
			push(c);                 
		}
		else if(c==')')         
		{
			x=pop();                 
			while(x != '(')            
			{
				op[j]=x;
				j++;
				x=pop();
			}
		}
		else
		{ 
			printf("\n1Error, you probably have entered a wrong expression.\n");   
			exit(0);
		}
		i++;
		c=ip[i]; 
	} 
	if(top>0)
	{
		printf("\n2Error, you probably have entered a wrong expression.\n"); 
		exit(0);
	}
	op[j] = '\0'; 
}

int main()
{
	char i[100], op[100];  
	printf("\nWelcome to the program that converts an entered infix expression to a postfix expression for you! \n");
	printf("\nPlease enter an infix expression : ");
	gets(i);
	convert(i,op);                  
	printf("The postfix expression is : ");
	printf("%s",op);                     
	return 0;
}
