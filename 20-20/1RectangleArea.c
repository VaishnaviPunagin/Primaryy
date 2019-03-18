#include<stdio.h>
#include<math.h>

void testcases(int *n)
{
	printf("How many rectangles? ");
	scanf("%d",n);
}

struct point
	{
		float x,y;
	};

struct rectangles
{
	struct point p1,p2,p3;
	float area;
};

void getcoordinates(int n, struct rectangles r[n])
{
	for(int i=0;i<n;i++)
	{
		printf("Enter values of three cordinates(x,y) for rectangle %d  ",i+1);
		scanf("%f %f %f %f %f %f",&r[i].p1.x,&r[i].p1.y,&r[i].p2.x,&r[i].p2.y,&r[i].p3.x,&r[i].p3.y);
	}

}


float caldistance(float *d1,float *d2,float *d3,int i,struct rectangles r[i])
{
	*d1=sqrt(pow(r[i].p2.y-r[i].p1.y,2)+pow(r[i].p2.x-r[i].p1.x,2));
	*d2=sqrt(pow(r[i].p3.y-r[i].p2.y,2)+pow(r[i].p3.x-r[i].p2.x,2));
	*d3=sqrt(pow(r[i].p1.y-r[i].p3.y,2)+pow(r[i].p1.x-r[i].p3.x,2));
}

void calarea(int n,struct rectangles r[n])
{
	for(int i=0;i<n;i++)
	{
		float d1,d2,d3;
		caldistance(&d1,&d2,&d3,i,r);
		
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
		printf("Area of rectangle with vertices (%.1f,%.1f),(%.1f,%.1f),(%.1f,%.1f) is %.1f \n",r[i].p1.x,r[i].p1.y,r[i].p2.x,r[i].p2.y,r[i].p3.x,r[i].p3.y,r[i].area);
	}	
}

int main()
{
	int n;
	testcases(&n);
	struct rectangles r[n];
	//struct point p1,p2,p3;
	getcoordinates(n,r);
	calarea(n,r);
	output(n,r);
	return 0;
}
