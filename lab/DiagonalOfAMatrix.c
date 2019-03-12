#include<stdio.h>

void inputorder(int *m, int *n)
{
	printf("Enter order of the matrix ! \n");
	scanf("%d%d",m,n);

}

void inputmatrix(int m, int n, int a[m][n])
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			{
				printf("Enter value into matrix for position [%d][%d]  :  ",i,j);
				scanf("%d",&a[i][j]);
			}
}

void diagonal(int m, int n, int a[m][n],int *check, int b[])
{
	if(m==n)
	{
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				{
					if(i==j)
					{
						*check=1;
						b[i]=a[i][j];		
					}
				}
	}
	else
		*check=0;

}

void output(int check,int m, int b[])
{
	if(check==1)
	{
		printf("Diagonal elements : \n");
		for(int i=0;i<m;i++)
			printf("%d\n",b[i]);
	}
	else
		printf("Entered matrix is not a square matrix. A rectangular matrix does not have a diagonal.\n");
}


int main()
{
	int m,n,check;
	inputorder(&m,&n);
	int a[m][n];
	inputmatrix(m,n,a);
	int b[m];
	diagonal(m,n,a,&check,b);
	output(check,m,b);
	return 0;
}
