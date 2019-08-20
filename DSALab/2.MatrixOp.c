#include<stdio.h>
char choice;
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

void display(int m, int n, int a[m][n])
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}

void add(int m, int n, int a[m][n],int p, int q, int b[p][q])
{
	if(m==p && n==q)
	{
		int c[m][n];
		printf("Sum of matrix A and matrix B is : \n");
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				c[i][j]=a[i][j]+b[i][j];
		display(m,n,c);
	}
	else
		printf("Orders of the matrices do NOT match, cannot be added. \n");
}

void sub(int m, int n, int a[m][n],int p, int q, int b[p][q])
{
	if(m==p && n==q)
	{
		int c[m][n];
		printf("Difference of matrix A and matrix B is : \n");
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				c[i][j]=a[i][j]-b[i][j];
		display(m,n,c);
	}
	else
		printf("Orders of the matrices do NOT match, cannot be subtracted. \n");
}

void multiply(int m, int n, int a[m][n],int p, int q, int b[p][q])
{
	if(n==p)
	{
		int c[m][q];
		printf("Product of matrix A and matrix B is : \n");
		for(int i=0;i<m;i++)
			for(int j=0;j<q;j++)
				c[i][j]=0;
		for(int i=0;i<m;i++)
			for(int j=0;j<q;j++)
				for(int k=0;k<p;k++)
					c[i][j]+=a[i][k]*b[k][j];
		display(m,q,c);
	}
	else
		printf("Orders of the matrices do NOT match, cannot be added. \n");
}

int main()
{
	do{
		int m,n,p,q,op;
		printf("For Matrix A : \n");
		getorder(&m,&n);
		int a[m][n];
		getarray(m,n,a);
		printf("For Matrix B : \n");
		getorder(&p,&q);
		int b[p][q];
		getarray(p,q,b);
		display(m,n,a); 
		display(p,q,b);
		printf("_____MENU______\n");
		printf(" 1. ADD \n 2. SUBTRACT \n 3. MULTIPLY \n _______________ \n Please enter an option (1-2-3) !\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1 : add(m,n,a,p,q,b);
				 break;
			case 2 : sub(m,n,a,p,q,b);
				 break;
			case 3 : multiply(m,n,a,p,q,b);
				 break;
			default : printf("Error wrong choice! \n");
				  break;

		}
		printf("Would you like to repeat the whole process again? Enter (y/n)\n");
		scanf("\n%c",&choice);
	}while(choice=='y');
	return 0;
}
