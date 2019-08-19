//LINEAR SEARCH + 2d ARRAY
#include<stdio.h>
void getorder(int *m, int *n)
{
	printf("Please enter the order of the matrix you want to enter! \n");
	scanf("%d%d",m,n);
}
void getarray(int m, int n, int a[m][n])
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			printf("Enter value for element at position [%d][%d] : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
}
int search(int m, int n, int a[m][n],int key)
{
	int c=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(a[i][j]==key)
			{
				printf("%d element has been found in the array at position [%d][%d]!\n",key,i+1,j+1);
				c=1;
				break;
			}
	return c;	
}

int main()
{
	int m,n,key;
	getorder(&m,&n);
	int a[m][n];
	getarray(m,n,a);
	printf("Enter an element you want to search for! This program shall determine the position, if it exists!\n");
	scanf("%d",&key);
	int c=search(m,n,a,key);
	if(c==0)
		printf("Entered element does not exist in the array! Try again later.\n");
	return 0;
}
