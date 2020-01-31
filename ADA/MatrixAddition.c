#include<stdio.h>
#include<time.h>

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
			printf("Enter value for element at position [%d][%d] : ",i,j);
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

void add(int m, int n, int a[m][n],int b[m][n])
{
	

	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			a[i][j]+=b[i][j];
}


int main()
{
	
	int m,n,p,q;
	clock_t t;
	double time;
	t=clock();
	printf("For Matrix A : \n");
	getorder(&m,&n);
	int a[m][n];
	getarray(m,n,a);
	printf("For Matrix B : \n");
	getorder(&p,&q);
	int b[p][q];
	getarray(p,q,b);
	t=clock()-t;
	time=((double)t/CLOCKS_PER_SEC);
	printf("\nThis is time taken to read inputs : %f\n",time);
	t=clock();
	printf("Matrix A  : \n"); 
	display(m,n,a);
	printf("Matrix B : \n"); 
	display(p,q,b);
	t=clock()-t;
	time=((double)t/CLOCKS_PER_SEC);
	printf("\nThis is time taken to display 2 matrices : %f\n",time);	
	t=clock();	
	if(m==p && n==q)
	{
		add(m,n,a,b);
		printf("Resultant matrix : \n");
		display(m,n,a);
	}
	t=clock()-t;
	time=((double)t/CLOCKS_PER_SEC);
	printf("Time taken to rs: %f\n",time);	
	return 0;
}
