#include<stdio.h>

void input(int *n)
{
	printf("How many elements do you want to enter?\n");
	scanf("%d",n);
}

void inputarr(int n,int a[])
{
	printf("\nNote : Entererd elemntes must be in ascending order.\n");
	for(int i=0;i<n;i++)
	{
		printf("Enter the element, stored at [%d] position  :  ",i+1);
		scanf("%d",&a[i]);
	}
}

void inputkey(int *search)
{
	printf("What element do you want to look for?\n");
	scanf("%d",search);
}

void bsearch(int search,int *pos,int *flag,int n,int a[])
{
	*flag=0;	
	int first=0;
	int last=n-1;
	int middle=(first+last)/2;
	while(first<=last)
	{
		if(a[middle]<search)
			first=middle+1;
		else if(a[middle]==search)
		{
			*pos=middle+1;
			*flag=1;
			break;
		}
		else
			last=middle+1;
		middle=(last+first)/2;
	}
}

void output(int pos,int flag,int a[])
{
	if(flag==1)
		printf("\n%d found at %d position in the array!.\n",a[pos],pos);
	else 
	printf("Element not found in array. %d does not exist in entered list.",a[pos]);
}

int main()
{
	int n,search,flag,pos;
	inputn(&n);
	int a[n];
	inputarr(n,a);
	inputkey(&search);
	bsearch(search,*pos,*flag,n,a);
	output(pos,flag,a);
	return 0;
}
