#include<stdio.h>

void inputorder(int *m,int *n)
{
	printf("Enter order of the matrix .\n");
	scanf("%d %d",m,n);
}

void inputmatrix(int m,int n,int matrix[m][n])
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			printf("Enter value into matrix for position [%d][%d] ",i,j);
			scanf("%d",&matrix[i][j]);
		}
}

int multiply(int m,int n,int m1[m][n],int p,int q,int m2[p][q],int m3[m][q])
{
	int i,j,k,f;
	if(n==p)
	{
		for(i=0;i<m;i++)
			for(j=0;j<q;j++)
				m3[i][j]=0;
	
		for(i=0;i<m;i++)
			for(j=0;j<q;j++)
				for(k=0;k<n;k++)
					m3[i][j]+=m1[i][k]*m2[k][j];
		f=0;
		return f;
	}
	
	else
	{
		f=1;
		return f;
	}
}

void output(int f,int m,int q,int m3[m][q])
{
	if(f==0)
	{	
		printf("The result of multiplication of the entered matrix is : \n");	
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<q;j++)
				printf("%d ",m3[i][j]);
			printf("\n");
		}
	}
	else 
		printf("Entered matrices cannot be multiplied.\n");
}

int main()
{
	int m,n,p,q,f;
	inputorder(&m,&n);
	int m1[m][n];
	inputmatrix(m,n,m1);
	inputorder(&p,&q);
	int m2[p][q];
	inputmatrix(p,q,m2);
	int m3[m][q];
	f=multiply(m,n,m1,p,q,m2,m3);
	output(f,m,q,m3);
	return 0;
}
