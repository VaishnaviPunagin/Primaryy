#include<stdio.h>
#include<time.h>

void towerofhanoi(int n, char a, char c, char b)
{
	if(n==1)
	{	
		printf("Move disk 1 from %c to %c\n",a,c);	
		return;	
	}
	towerofhanoi(n-1,a,b,c);
	printf("Move disk %d from %c to %c\n",n,a,c);
	towerofhanoi(n-1,b,c,a);
}

int main()
{
	int n;
	char a='a',b='b',c='c';
	printf("How many disks do we have? ");
	scanf("%d",&n);
	clock_t start,end;
	start=clock();
	towerofhanoi(n,a,c,b);
	end=clock();
	double time=((double)(end-start))/CLOCKS_PER_SEC;
	printf("\n\nTime taken :: \nStart = %ld\nEnd = %ld\nTotal time taken = %f\n\n",start,end,time);
	return 0;
}
