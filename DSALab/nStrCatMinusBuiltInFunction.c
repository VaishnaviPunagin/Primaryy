#include<stdio.h>
#include<string.h>
int main()
{
	printf("Give me string 1 ::  ");
	char a[100],b[100];
	scanf("%s",a);
	printf("Give me string 2 ::  ");
	scanf("%s",b);
	printf("How many words of string 2 do you want to merge with string 1 ??  ");
	int n;
	scanf("%d",&n);
	int m=strlen(a),i=m,j=0;
	while(j<n)
	{
		a[m]=b[j];
		m++;
		j++;
	}
	printf("TAKE CONCATENATED STRING :: %s\n\n",a);
	return 0;
}
