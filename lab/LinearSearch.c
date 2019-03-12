#include<stdio.h>
//LINEAR SEARCH
void inputsize(int *n)
{
	      printf("Please enter the size of the simgle dimensional array! \n");
	      scanf("%d",n);
}

void inputarray(int n, int a[])
{
	    for(int i=0;i<n;i++)
	    {
		        printf("Enter value for array element at position %d  :  ",i+1);
		        scanf("%d",&a[i]);
	    }
}

void inputkey(int *key)
{
	      printf("Please enter the element you want to search for  :   ");
	      scanf("%d",key);
}

void search(int key,int n,int a[],int *position,int *flag)
{
	      *position=0;
	      *flag=0;
	      for(int i=0;i<n;i++)
		        if(key==a[i])
		        {
			          *position=i+1;
			          *flag=1;
			          break;
		        }	
}

void output(int key, int position, int flag, int a[])
{
	      if(flag==1)
		          printf("\n%d found in the array at location %d .\n",key,position);
	      else 
		          printf("%d not found. Value does not exist in the entered array. \n",key);
}

int main()
{
	      int n,position,flag,key;
	      inputsize(&n);
	      int a[n];
	      inputarray(n,a);
	      inputkey(&key);
	      search(key,n,a,&position,&flag);
	      output(key,position,flag,a);
	      return 0;
}
