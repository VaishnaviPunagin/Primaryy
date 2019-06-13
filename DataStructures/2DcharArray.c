#include<stdio.h>
int main()
{
	int n;
	printf("How many strings do you want to enter?");
	scanf("%d",&n);	
	char s[n][100];
	for(int i=0;i<n;i++)
	{	
		printf("Enter word [%d] : ",i+1);
		scanf("%s",s[i]);
	}
	printf("Strings stored are : \n");
	for(int i=0;i<n;i++)
		printf("[%d] --> %s\n",i+1,s[i]);
	return 0;
}
