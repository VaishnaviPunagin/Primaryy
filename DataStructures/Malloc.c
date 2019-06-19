#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void getstrings(int n,char *s[n])
{
	char a[100];
	for(int i=0;i<n;i++)
	{
		printf("Enter word : ");
		scanf("%s",a);	
		printf("%ld",strlen(a));	
		s[i]=malloc(strlen(a)+1);
		strcpy(s[i],a);
	}
}

int size()
{
	int n;
	printf("How many strings ? : ");
	scanf("%d",&n);
	return n;
}
void display(int n, char *s[n])
{
	for(int i=0;i<n;i++)	
		printf("[%d] --> %s \n",i+1,s[i]);
}
int comparator(const void *a, const void *b)
{
	return strcmp(*(const char **)a,*(const char **)b);
}

int main()
{
	int n=size();	
	char *s[n];
	getstrings(n,s);
	printf("WORDS STORED ARE : \n");
	display(n,s);
	qsort(&s,n,sizeof(char *),comparator);
	printf("\nWORDS STORED AFTER SORT ARE : \n");
	display(n,s);
	return 0;
}
