#include<stdio.h>

void input(int *n)
{
    printf("How many numbers would you like to enter ? \n");
    scanf("%d",n);
}

void inputarray(int n,int arr[])
{
      for(int i=0;i<n;i++)
      {
            printf("\nEnter the value :  ");
            scanf("%d",&arr[i]);
      }
}

void bubblesort(int n, int arr[])
{
       int i,j;
       for(i=0;i<n;i++)
            for(j=0;j<n-1-i;j++)
                if(arr[j]>arr[j+1])
                {
                      int temp=arr[j];
                      arr[j]=arr[j+1];
                      arr[j+1]=temp;
                }
}

void output(int n, int arr[])
{
      printf("The Sorted array is   : \n");
      for(int i=0;i<n;i++)
            printf("%d \n",arr[i]);
}

int main()
{
      int n;
      input(&n);
      int arr[n];
      inputarray(n,arr);
      bubblesort(n,arr);
      output(n,arr);
      return 0;
}
