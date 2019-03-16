//EFRAC TRIAL LOL
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

struct fraction cal(struct fraction f)
{
	//float a = (float) (f.den/f.num);
	//int d;
	double d =ceil( ((double)f.den/(double)f.num));
	struct fraction f1={1,d};
	//printf("%lf",d);
	struct fraction f2=subtract(f,f1);
	printf("%d/%d=%d/%d+%d/%d",f.num,f.den,f1.num,f1.den,f2.num,f2.den);
	struct fraction q={0,0};
	return q;

}

int main()
{
	struct fraction f=input();
	struct fraction q=cal(f);
	//int a=ceil(1.6);
	//printf("\n%d",a);
	return 0;
}
