#include<stdio.h>
#include<stdlib.h>

void input(int n,char *s[n])
{
	int size=100;
	for(int i=0;i<n;i++)
	{
		s[i]=malloc(100);
		printf("Enter word : ");
		scanf("%s",s[i]);
	}
}

int main()
{
	int n;
	printf("How many strings ??");
	scanf("%d",&n);	
	char *s[n];
	input(n,s);
	printf("WORDS STORED ARE : \n");
	for(int i=0;i<n;i++)	
		printf("%s  ",s[i]);	
	return 0;
}
