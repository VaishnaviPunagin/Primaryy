#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *s[3];
	size_t size=1000;
	for(int i=0;i<3;i++)
	{
		s[i]=malloc(size*sizeof(char));
		printf("Enter word : ");
		scanf("%s",s[i]);
	}
	printf("WORDS STORED ARE : \n");
	for(int i=0;i<3;i++)	
		printf("%s  ",s[i]);	
	return 0;
}
