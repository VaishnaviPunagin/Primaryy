#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void input(int n,char *s[n])
{
	int size=100;
	for(int i=0;i<n;i++)
	{
		s[i]=malloc(size*sizeof(char));
		printf("Enter word : ");
		scanf("%s",s[i]);
	}
}

int comparator(const void *a, const void *b)
{
	return strcmp(*(char* const*)a,*(char* const*)b);
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
