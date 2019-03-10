#include<stdio.h>

void inputsize(int *n)
{
	printf("How many elements would you like to enter?\n");
	scanf("%d",n);
}

void enterarr(int n,int a[])
{
	for(int i=0;i<n;i++)
	{
		printf("Enter element for position [%d] : ",i);
		scanf("%d",&a[i]);
	}
		
}

void selectionsort(int n,int arr[])
{
	int i,j,min_pos;
	for(i=0;i<n-1;i++)
	{
		min_pos=i;
		for(j=i+1;j<n;j++)
			if(arr[j]<arr[min_pos])
				min_pos=j;
	int temp=arr[min_pos];
	arr[min_pos]=arr[i];
	arr[i]=temp;
	}
}

void printarray(int n,int arr[])
{
	printf("The sorted array is : \n");
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\nThe minimum value in the array is %d .\n",arr[0]);
	printf("The maximum value in the array is %d .\n",arr[n-1]);
}


int main()
{
	int n;
	inputsize(&n);
	int arr[n];
	enterarr(n,arr);
	selectionsort(n,arr);
	printarray(n,arr);
	return 0;
}
