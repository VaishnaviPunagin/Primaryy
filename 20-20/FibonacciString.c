#include<stdio.h>

int inputn()
{
	int n;
	printf("Enter the no of test cases :  ");
	scanf("%d",&n);
	return n;
}

int rows()
{
	int r;
	printf("How many terms/rows do you want? ");
	scanf("%d",&r);
	return r;
}

char inputs()
{
	char s[1000];
	printf("Enter character or string. A space terminates the string.");
	scanf("%s",&s);
}

void fibo(int r,char s1[],char s2[])
{
	//char s3[10000];
	while(r!=0)
	{
		printf("%s%s\n",s1,s2);
		//strcpy()
		r--;
	}
}
int main()
{
	int n=inputn();
	for(int i=0;i<n;i++)
	{
		int r=rows();
		char s1=inputs();
		char s2=inputs();
		fibo(r,s1,s2);
	}
	return 0;
}
