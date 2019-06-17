#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void input(int n,char *s[n])
{
	char a[1000];
	for(int i=0;i<n;i++)
	{
		printf("Enter word : ");
		scanf("%s",a);		
		s[i]=malloc(strlen(a)+1);
	}
}

int comparator(const void *a, const void *b)
{
	return strcmp(*(const char **)a,*(char* const*)b);
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
	qsort(&s[0],n,sizeof(char *),comparator);
	printf("WORDS STORED AFTER SORT ARE : \n");
	for(int i=0;i<n;i++)	
		printf("%s  ",s[i]);	
	return 0;
}
