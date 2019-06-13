#include<stdio.h>
int main()
{
	char s[3][10];
	for(int i=0;i<3;i++)
	{	
		printf("Enter words : ");
		scanf("%s",s[i]);
	}
	printf("Strings stored are : \n");
	for(int i=0;i<3;i++)
		printf("[%d] --> %s\n",i+1,s[i]);
	return 0;
}
