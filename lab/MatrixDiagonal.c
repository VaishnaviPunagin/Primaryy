#include<stdio.h>

void inputorder(int *m, int *n)
{
	printf("Please enter the order of the matrix! \n");
	scanf("%d %d",m,n);
}

void inputmatrix(int m,int n,int a[m][n])
{
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			{
				printf("Enter value for position [%d][%d]",i,j);
				scanf("%d",&a[i][j]);
			}
}


/*void  diagonal(int m, int n, int a[m][n], int b[])
{
	for(int i=1;i<m;i++)
		for(int j=1;j<n;j++)
			if(i==j)
			{
				b[i==j]=a[i][j];		//WHAT THE HECK?????
			}
	
	//for(int i=1,j=1;i<=m && j<=n;i++,j++)
			//printf("%d\n",a[i][j]);
	
	for(int i=1,j=1;i<=m && j<=n;i++,j++)
			{b[i==j]=a[i][j];
			printf(b[i]);}
	
}*/

output(int m,int n,int b[])
{
	printf("The diagonal elements are : \n");
	if(m==n)
		for(int i=0;i<m;i++)
			printf("%d\n",b[i]);
	else
		for(int i=1,j=1;i<=m && j<=n;i++,j++)
			printf("%d\n",a[i][j]);
}

int main()
{
	int m,n;
	inputorder(&m,&n);
	int a[m][n];
	int b[m];
	inputmatrix(m,n,a);
	diagonal(m,n,a,b);
	//output(m,n,b);
}
