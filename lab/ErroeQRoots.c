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

void assign(float *x,float *y,float *z,struct equation e)
{
	float x=e.a,y=e.b,z=e.c;
	float d1=e.r1.real,d2=e.r2.real,i1=e.r1.im,i2=e.r2.im;
	
}


void calroots(float x,float y,float z,float *d1,float *d2,float *i1,float *i2,float d)
{
	if(d>0)
	{
		*d1=((-y)+sqrt(d))/(2*x);
		*i1=0;
		*d2=((-y)-sqrt(d))/(2*x);
		*i2=0;
	}
	
	else if(d==0)
	{
		*d1=(y)/(2*x);
		*i1=0;
		*d2=d1;
		*i2=0;
	}
	
	else 
	{
		*d1=(-y)/(2*x);
		*i1=d/(2*x);
		*d2=d1;
		*i2=i1;	
	}
}

void reassign(float d1,float d2,float i1,float i2,struct equation *e)
{
	e->r1->real=d1;
	e->r1->im=i1;
	e->r2->real=d2;
	e->r2.real=i2;
}

void disroots(float d,struct equation e)
{
	if(d>0)
		printf("Roots are real and distinct.\n");
	else if(d==0)
		printf("Roots are real and equal.\n");
	else
		printf("Roots are comlex.\n");
	printf("Root 1 =  %.2f+i%.2f\n",e.r1.real,e.r1.im);
	printf("Root 2 =  %.2f+i%.2f\n",e.r2.real,e.r2.im);
}

int main()
{
	float d,x,y,z,d1,d2,i1,i2;
	struct equation e;
	inputcoeff(&e);
	d=caldet(e);
	assign(&x,&y,&z,e);
	calroots(x,y,z,&d1,&d2,&i1,&i2,d);
	reassign(d1,d2,i1,i2,e);
	disroots(d,e);
}
