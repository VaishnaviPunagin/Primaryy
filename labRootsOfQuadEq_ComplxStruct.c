#include<stdio.h>
#include<math.h>

struct complxroot
{
	float real,im;
};

void inputcoeff(float *a,float *b,float *c)
{
	printf("Enter values for coefficients of the quadratic equation whose roots shall be found.\n");
	printf("Expression is oh the form ax^2+bx+c \n ");
	scanf("%f %f %f",a,b,c);
}

float caldet(float a,float b,float c)
{
	int d;
	d=(b*b)-(4*a*c);
	return d;
}

void calroots(float a,float b,float c,float d,struct complxroot *r1,struct complxroot *r2)
{
	
	if(d>0)
	{
		r1->real=(-b+sqrt(d))/(2*a);
		r1->im=0;
		r2->real=(-b-sqrt(d))/(2*a);
		r2->im=0;
	}
	
	else if(d==0)
	{
		r1->real=(b)/(2*a);
		r1->im=0;
		r2->real=r1->real;
		r2->im=0;
	}
	
	else 
	{
		r1->real=(-b)/(2*a);
		r1->im=sqrt(-d)/(2*a);
		r2->real=r1->real;
		r2->im=r1->im;	
	}
}


void disroots(float d,struct complxroot r1,struct complxroot r2)
{
	if(d>0)
		printf("Roots are real and distinct.\n");
	else if(d==0)
		printf("Roots are real and equal.\n");
	else
		printf("Roots are comlex.\n");
	printf("Root 1 =  %.2f+i%.2f\n",r1.real,r1.im);
	printf("Root 2 =  %.2f-i%.2f\n",r2.real,r2.im);
}



int main()
{
	float a,b,c;
	inputcoeff(&a,&b,&c);
	float d=caldet(a,b,c);
	struct complxroot r1,r2;
	calroots(a,b,c,d,&r1,&r2);
	disroots(d,r1,r2);
}
