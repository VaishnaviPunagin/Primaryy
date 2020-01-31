#include<stdio.h>
#include<time.h>

int getn(int *n)
{
	printf("How many elements?");
	scanf("%d",n);
}

int getarray(int  n, int a[])
{
	for(int i=0;i<n;i++)
	{
		printf("Enter value for pos{%d} :: ",i+1);
		scanf("%d",&a[i]);
	}
}

int linearsearch(int n,int a[], int key)
{
	int p=-1;
	for(int i=0;i<n;i++)
		if(a[i]==key)
			p=i;
	return p;
}

int main()
{
	int n,key,p;
	clock_t start,end;
	start=clock();
	getn(&n);
	int a[n];
	getarray(n,a);
	printf("What value are you looking for?");
	scanf("%d",&key);
	p=linearsearch(n,a,key);
	if(p==-1)
		printf("Key element not found.\n");
	else
		printf("%d value found at position [%d] in the enetered array!\n",key,p+1);
	end=clock();
	double time=((double)(end-start))/CLOCKS_PER_SEC;
	printf("Time taken\nStart: %ld\nEnd: %ld\nTotal time: %f\n",start,end,time);
	return 0;
	
}
