#include<stdio.h>
int main()
{
	long double a[5],min,max,s1=0,s2=0;
	for(int i=0;i<5;i++)
		scanf("%Lf",&a[i]);
	min=max=a[0];
	for(int i=0;i<5;i++)
	{
		if(a[i]>=max)
			max=a[i];
		if(a[i]<=min)
			min=a[i];
	}
	for(int i=0;i<5;i++)
	{
		if(a[i]==min)
			;
		else
			s1+=a[i];
		if(a[i]==max)
			;
		else
			s2+=a[i];
	}
	printf("%.0Lf %.0Lf",s1,s2);
	return 0;
}
