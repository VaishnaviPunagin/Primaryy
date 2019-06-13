#include<stdio.h>
int main()
{
	char s[3][10];
	for(int i=0;i<3;i++)
	{	
		printf("Enter word : ");
		scanf("%s",s[i]);
	}
	printf("String")
	for(int i=0;i<3;i++)
		printf("Stored string is :  %s\n",s[i]);
	return 0;
}
