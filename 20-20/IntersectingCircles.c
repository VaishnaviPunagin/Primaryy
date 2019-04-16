#include<stdio.h>
#include<math.h>

void testcases(int *t)
{
	printf("How many pairs of circles? ");
	scanf("%d",t);
}

struct center
{
	float x,y;
};

struct circles
{
	float r;
	struct center c;
};

void getcircles(int t,struct circles circle[t])
{
	for(int i=0;i<t;i++)
	{
		printf("NOTE : circle 1 and 2 shall be compared. And then circle 3 and 4, and so on.\n")
		printf("Radius of circle %d : ",i+1);
		scanf("%f",&circle[i].r);
		printf("Co-ordinates of center of circle %d : ",i+1);
		scanf("%f %f",&circle[i].c.x,&circle[i].c.y);
	}
}

void check(int t,struct circles circle[t])
{
	for(int i=0;i<t;i+=2)
	{
		float dc=sqrt(pow(circle[i].c.x-circle[i+1].c.x,2)+pow(circle[i].c.y-circle[i+1].c.y,2));
		float d=circle[i].r+circle[i+1].r;
		if(dc>d)
			printf("NO intersect \n");
		if(dc==d)
			printf("Intersect one point \n");
		if(dc<d)
			printf("TWO intersect \n");
	}
}

int main()
{
	int t;
	testcases(&t);
	t=2*t;
	struct circles circle[t];
	struct center c[t];
	getcircles(t,circle);
	check(t,circle);
	return 0;
}
