#include<stdio.h>
#include<math.h>

void input(float *a,float *b,float*c)
{
	      printf("Enter values of coefficients for a quadratic eqaution ax^2+bx+c : \n");
	      scanf("%f %f %f",a,b,c);
}

float compute(float a,float b,float c,float *r1,float *r2,float *d)
{
	      *d=(b*b)-(4*a*c);
	      if (*d>0)
	      {
		          *r1=(-b+sqrt(*d))/(2*a);
		          *r2=(-b-sqrt(*d))/(2*a);
	      }
	
	      else 
	      {
		          *r1=(-b)/(2*a);
		          *r2=*r1;
	      }
	
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
	      compute(a,b,c,&r1,&r2,&d);
	      output(r1,r2,d);
	      return 0;
}
