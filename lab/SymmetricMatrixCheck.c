#include<stdio.h>

void inputorder(int *m,int *n)
{
    printf("Enter the order of the matrix ! \n");
    scanf("%d %d",m,n);
}

void inputmatrix(int m, int n, int matrix[m][n])
{
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            printf("Enter value for position [%d][%d] ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    printf("\n");
}

int ftranspose(int m, int n, int matrix[m][n], int transpose[n][m])
{
    int i,j;
    int f=0;
    if(m==n)
    {
        for(i=0;i<m;i++)
            for(j=0;j<m;j++)
                transpose[j][i]=matrix[i][j];
           
        for(i=0;i<m;i++)
           { 
                for(j=0;j<m;j++)
                    if(matrix[i][j]!=transpose[i][j])
                        f=1;
           }
        return f;
    }
    else 
        return f;
}

void output(int c,int m,int n,int matrix[m][n])
{
    int i,j;
    printf("\n MATRIX : \n");
    if(m!=n)
    {   
        for(i=0;i<m;i++)
            { 
                for(j=0;j<n;j++)
                     printf("%d ",matrix[i][j]); 
                printf("\n");
            }
        printf("\nThe entered matix, displayed above, is not a symmetric matrix.\n ");
        
    }
    
    else if(c==0)
    {
        for(i=0;i<m;i++)
            { 
                for(j=0;j<m;j++)
                     printf("%d ",matrix[i][j]); 
                printf("\n");
            }
        printf("\nThe entered matrix, displayed above, is SYMMETRIC. \n");
        
        
    }
    else
    {
         for(i=0;i<m;i++)
            { 
                for(j=0;j<n;j++)
                     printf("%d ",matrix[i][j]); 
                printf("\n");
            }
        printf("\nThe entered matrix, displayed above, is not a symmetric matrix.");
    }
        
}


int main()
{
    int m,n,c;
    inputorder(&m,&n);
    int matrix[m][n];
    int transpose[n][m];
    inputmatrix(m,n,matrix);
    c=ftranspose(m,n,matrix,transpose);
    output(c,m,n,matrix);
    return 0;
}
