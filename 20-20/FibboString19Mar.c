#include<stdio.h>
#include<string.h>

void testcases(int *n)
{
	printf("How many trials? ");
	scanf("%d",n);
}

void inputrows(int *rows)
{
	printf("How many rows do you want? ");
	scanf("%d",rows);
}

void generatefibbo()
{
	gets(strings[0]);
	gets(strings[1]);
	
}


int main()
{
	int n;
	testcases(&n);
	for(int i=0;i<n;i++)
	{
		int rows;
		inputrows(&rows);		
		char strings[rows][1000];
		
		generatefibbo(strings);
		
	}
}
