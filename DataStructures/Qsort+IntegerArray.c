#include<stdio.h>
#include<stdlib.h>

int comparator(const void *a, const void *b)
{
	const int *p=(const int *)a;
	const int *q=(const int *)b;
	return *p-*q;
}

void getarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter element [%d] : ",i+1);
		scanf("%d",&a[i]);
	}
}

void display(int a[],int n)
{
	printf("Array is : \n");
	for(int i=0;i<n;i++)
		printf("[%d]-->%d\n",i+1,a[i]);
}

int main()
{
	int n;
	printf("How many elements?! \n");
	scanf("%d",&n);
	int a[n];
	getarray(a,n);
	display(a,n);
	qsort(a,n,sizeof(int),comparator);
	printf("After a QuickSort : ");
	display(a,n);
	return 0;
}
