#include<stdio.h>

struct fraction
{
    int num,den;
};

struct fraction input()
{
    struct fraction f;
    printf("Enter value of numerator: ");
    scanf("%d",&f.num);
    printf("Enter value of denominator: ");
    scanf("%d",&f.den);
    return f;
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
    struct fraction f1=input();
    struct fraction f2=input();
    struct fraction result=add(f1,f2);
    output(result);
    return 0;
}
