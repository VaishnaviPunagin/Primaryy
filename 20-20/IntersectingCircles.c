#include <stdio.h>
#include<math.h>

struct center
{
    float x,y;
};


struct circles
{
    float radius;
    struct center c;
    
};

void howmanypairsofcircles(int *n)
{
    printf("How many pairs of circes do you want to work with? ");
    scanf("%d",n);
    
}


void getvalues(int n,struct circles circle[2n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter radius and center coordinates(x,y) for circle 1 of pair %d : ",i+1);
        scanf("%f %f %f",&circle[i].radius,&circle[i].c.x,&circle[i].c.y);
        
    }
}

int main()
{
    int n;
    howmanypairsofcircles(&n);
    struct circles circle[2n];
    struct center c[2n];
    getvalues(n,circle);
    
}

