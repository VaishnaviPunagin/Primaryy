#include<stdio.h>

struct fraction
{
    int num,den;
};

void in(int *num,int *den)
{
    printf("\nEnter value of numerator    :   ");
    scanf("%d",num);
    printf("\nEnter value of denominator  :   ");
    scanf("%d \n",den);
}

struct fraction add(struct fraction f1,struct fraction f2)
{
    struct fraction sum={((f1.num*f2.den)+(f2.num*f1.den)),(f1.den*f2.den)};
    return sum;
}

void output(struct fraction sum)
{
    printf("SUM IS %d / %d .",sum.num,sum.den);
    
}

int main()
{
    int num1,den1,num2,den2;
    in(&num1,&den1);
    in(&num2,&den2);
    struct fraction f1={num1,den1};
    struct fraction f2={num2,den2};
    struct fraction result=add(f1,f2);
    output(result);
    return 0;
    
}
