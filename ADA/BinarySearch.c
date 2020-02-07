#include<stdio.h>
#include<time.h>

int getsize(int *n)
{
        printf("How many elements do you want to enter?\n");
        scanf("%d",n);
}

int getarray(int n, int a[])
{
        printf("Enter values : NOTE : IN ASCENDING ORDER PLEASE\n");
        for(int i=0;i<n;i++)
        {
                printf("Value for pos[%d] : ",i);
                scanf("%d",&a[i]);
        }
}

int bsi(int n, int a[], int key)
{
        int low=0, high=n-1, mid;
        while(low<high)
        {
                mid=(low+high)/2;
                if(a[mid]==key)
                        return mid;
                else if(key<a[mid])
                        high=mid-1;
                else if(key>a[mid])
                        low=mid+1;
                else return -1;
        }
}

int bsr(int low, int high, int a[], int key)
{
        if(low<high)
        {
                int mid=(low+high)/2;
                if(a[mid]==key)
                        return mid;
                else if(key<a[mid])
                        return bsr(low,mid-1,a,key);
                else if(key>a[mid])
                        return bsr(mid+1,high,a,key);
                else return -1;
        }
}

int main()
{
        int n,key;
        getsize(&n);
        int a[n];
        getarray(n,a);
        printf("What element do you want to look for?\n");
        scanf("%d",&key);
        printf("Binary Search + Iterative :: \n");
        clock_t start,end;
        start=clock();
        int check=bsi(n,a,key);
        if(check==-1)
                printf("Element not found \n");
        else
                printf("%d element found in array at position[%d] \n",key,check+1);
        end=clock();
        double time=((double)(end-start))/CLOCKS_PER_SEC;
        printf("Start = %ld, End = %ld, Total time taken = %f\n\n",start,end,time);
        start=clock();
        printf("Binary Search + Recursive :: \n");
        check=bsr(0,n-1,a,key);
        if(check==-1)
                printf("ELEMENT NOT FOUND\n");
        else
                printf("%d element found at pos[%d]\n",key,check+1);
        end=clock();
        time=((double)(end-start))/CLOCKS_PER_SEC;
        printf("Start = %ld, End = %ld, Total time taken = %f\n\n",start,end,time);
        return 0;
}
