#include<stdio.h>
void getorder(int *m, int *n)
{
	printf("Please enter the order of the matrix you want to enter! \n");
	scanf("%d%d",m,n);
}

int getarray(int m, int n, int a[m][n])
{
	int c=0;
	printf("This program requires you to enter a sparse matrix.\nMake sure number of non zero elements entered are < number of zeroes!\n");
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			printf("Enter value for element at position [%d][%d] : ",i+1,j+1);
			scanf("%d",&a[i][j]);
			if(a[i][j]!=0)
				c++;
		}
	return c;
}

void gensparserep(int m, int n, int a[m][n], int c, int s[3][c])
{
	int count=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if(a[i][j]!=0)
			{
				s[0][count]=i;
				s[1][count]=j;
				s[2][count]=a[i][j];
				count++;
			}
}

void display(int a, int b, int m[a][b])
{
	printf("The stored matrix is : \n");
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
			printf("%d ",m[i][j]);
		printf("\n");
	}		
	printf("\n");
}
int main()
{
	int m,n;
	getorder(&m,&n);
	int a[m][n];
	int c=getarray(m,n,a);
	int s[3][c];
	gensparserep(m,n,a,c,s);
	printf("Matrix A : ");
	display(m,n,a);
	printf("Final representation of the sparse matrix to save memory space instead of storing 0s is : ");
	display(3,c,s);
	return 0;
}
