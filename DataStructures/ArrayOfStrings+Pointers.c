#include<stdio.h>
#include<stdlib.h>


int main()
{
	int n;
	printf("How many strings ??");
	scanf("%d",&n);	
	char *s[n];
	int size=1000;
	for(int i=0;i<n;i++)
	{
		s[i]=malloc(size*sizeof(char));
		printf("Enter word : ");
		scanf("%s",s[i]);
	}
	printf("WORDS STORED ARE : \n");
	for(int i=0;i<n;i++)	
		printf("%s  ",s[i]);	
	return 0;
}
