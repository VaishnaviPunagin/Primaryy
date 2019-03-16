#include<stdio.h>
#include<math.h>

void testcases(int *n)
{
	printf("How many rectangles? ");
	scanf("%d",n);
}


struct rectangles
{
	float p1x,p1y,p2x,p2y,p3x,p3y;
	float area;
};

void invals(int n, struct rectangles r[n])
{
	for(int i=0;i<n;i++)
	{
		printf("Enter values of three cordinates(x,y) for rectangle %d",i+1);
		scanf("%f %f %f %f %f %f",&r[i].p1x,&r[i].p1y,&r[i].p2x,&r[i].p2y,&r[i].p3x,&r[i].p3y);
	}

}

void calarea(int n,struct rectangles r[n])
{
	for(int i=0;i<n;i++)
	{
		float d1,d2,d3;
		d1=sqrt(pow(r[i].p2y-r[i].p1y,2)+pow(r[i].p2x-r[i].p1x,2));
		d2=sqrt(pow(r[i].p3y-r[i].p2y,2)+pow(r[i].p3x-r[i].p2x,2));
		d3=sqrt(pow(r[i].p1y-r[i].p3y,2)+pow(r[i].p1x-r[i].p3x,2));
		if(d1>d2 && d1>d3)
			r[i].area=d2*d3;
		if(d2>d1 && d2>d3)
			r[i].area=d1*d3;
		if(d3>d1 && d3>d2)
			r[i].area=d1*d2;
	}
}

void output(int n, struct rectangles r[n])
{
	for(int i=0;i<n;i++)
	{
		printf("Area of rectangle with vertices (%.1f,%.1f)(%.1f,%.1f)(%.1f,%.1f) is %.1f .\n",r[i].p1x,r[i].p1y,r[i].p2x,r[i].p2y,r[i].p3x,r[i].p3y,r[i].area);
	}	
}

int main()
{
	int n;
	testcases(&n);
	struct rectangles r[n];
	invals(n,r);
	calarea(n,r);
	output(n,r);
	return 0;
}
