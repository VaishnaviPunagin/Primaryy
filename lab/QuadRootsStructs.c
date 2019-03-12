#include<stdio.h>
#include<math.h>

struct equation
{
	float a,b,c;
	struct complxroot
	{
	float real,im;
	}r1,r2;
};



void inputcoeff(struct equation *e)
{
	printf("Enter values for coefficients of the quadratic equation whose roots shall be found.\n");
	printf("Expression is oh the form ax^2+bx+c \n ");
	scanf("%f %f %f",&e->a,&e->b,&e->c);
}

float caldet(struct equation e)
{
	int d;
	d=(e.b*e.b)-(4*e.a*e.c);
	return d;
}

void calroots(struct equation *e,float d)
{
	float x=e->a,y=e->b,z=e->c;
	float d1=e->r1.real,d2=e->r2.real,i1=e->r1.im,i2=e->r2.im;
	if(d>0)
	{
		d1=((-y)+sqrt(d))/(2*x);
		i1=0;
		d2=((-y)-sqrt(d))/(2*x);
		i2=0;
	}
	
	else if(d==0)
	{
		d1=(y)/(2*x);
		i1=0;
		d2=d1;
		i2=0;
	}
	
	else 
	{
		d1=(-y)/(2*x);
		i1=d/(2*x);
		d2=d1;
		i2=i1;	
	}
}

void disroots(float d,struct equation e)
{
	if(d>0)
		printf("Roots are real and distinct.\n");
	else if(d==0)
		printf("Roots are real and equal.\n");
	else
		printf("Roots are comlex.\n");
	printf("Root 1 =  %.2f+%.2f\n",e.r1.real,e.r1.im);
	printf("Root 2 =  %.2f+%.2f\n",e.r2.real,e.r2.im);
}

int main()
{
	float d;
	struct equation e;
	inputcoeff(&e);
	d=caldet(e);
	calroots(&e,d);
	disroots(d,e);
}
