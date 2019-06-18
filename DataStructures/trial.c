#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void input(int n, char *a[])
{
	for(int i=0;i<n;i++)
	{
		a[i]=malloc(100);		
		printf("ASDFGHJKL [%d] :  ",i+1);
		scanf("%s",a[i]);
	}
}
int main()
{
	char *a[3];
	input(3,a);
	for(int i=0;i<3;i++)
	{
		printf("[%d] --> %s\n",i+1,a[i]);
	}
	return 0;

}
