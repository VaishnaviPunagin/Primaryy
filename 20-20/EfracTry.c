//EFRAC TRIAL 
#include<stdio.h>
#include<math.h>

struct fraction
{
	int num,den;
};

struct fraction input()
{
	struct fraction f;
	printf("Enter numerator and denominator of the fraction : \n");
	scanf("%d %d",&f.num,&f.den);
	return f;
}

struct fraction subtract(struct fraction f, struct fraction f1)
{
	struct fraction f2;
	f2.den=(f.den*f1.den);
	f2.num=(f.num*f1.den-f1.num*f.den);
	return f2;
}

cal(struct fraction *f[1000])
{
	double d =ceil( ((double)f[0].den/(double)f[0].num));
	*f[1]={1,d};
	*f1={1,d};

}

int main()
{
	struct fraction f[1000];
	f[0]=input();
	
}
