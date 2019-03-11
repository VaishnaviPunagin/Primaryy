#include<stdio.h>
#include<math.h>

struct root
{
	int real,imaginary;
};

void input(float *a,float *b,float*c)
{
	      printf("Enter values of coefficients for a quadratic eqaution ax^2+bx+c : \n");
	      scanf("%f %f %f",a,b,c);
}

struct root compute(float a,float b,float c,struct root *r1,struct root *r2,float *d)
{
	      *d=(b*b)-(4*a*c);
	      if (*d>0)
	      {
		          *r1.real=(-b+sqrt(*d))/(2*a);
		          *r1.imaginary=0;
		          *r2.real=(-b-sqrt(*d))/(2*a);
		          *r2.imaginary=0;
		          
		          
	      }
	
	      else if (*d==0) 
	      {
		          *r1=(-b)/(2*a);
		          *r1.imaginary=0;
		          *r2=*r1;
		          *r1.imaginary=0;
	      }
	      
	      else if (*d<0)
	      {
	      		  *r1.real=(-b)/(2*a);
	      		  *r1.imaginary=d;
		          *r2=*r1;
		          *r1.imaginary=d;  
	      }
	
}

struct root display(struct root r)
{
	     printf("%f+")
}
void output(float r1,float r2,float d)
{
	      if(d>0)
	      {
		          printf("Roots are real and distinct! They are  :  %.3f and %.3f .",r1,r2);
	      }
	      else if(d==0)
	      {
		          printf("Roots are real and equal! They are : %.3f and %.3f .",r1,r2);
	      }
	      else
        {
		          printf("Roots are complex numbers! They are : %.3f+%.3fi  and %.3f-%.3fi .",r1,d,r2,d);
        }
}

int main()
{
	      float a,b,c,r1,r2,d;
	      input(&a,&b,&c);
	      struct root r1,r2;
	      compute(a,b,c,&r1,&r2,&d);
	      output(r1,r2,d);
	      return 0;
}
