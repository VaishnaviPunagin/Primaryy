#include<stdio.h>

struct student
{
    int rollno,mark;
    char name[50],dept[50],grade[10];

};

void inputn(int *n)
{
      printf("How many students' data do you want to store?\n");
      scanf("%d",n);
}

void inputdetails(int n,struct student s[])
{
      for(int i=0;i<n;i++)
      {
            printf("\nEnter student %d's Rollnumber : ",i+1);
            scanf("%d",&s[i].rollno);
            printf("Enter %d st student's name  : ",i+1);
            scanf("%s",&s[i].name);
            printf("Enter department that student %d is from : ",i+1);
            scanf("%s",&s[i].dept);
            printf("Enter marks obtained by the student %d , out of 100. : ",i+1);
            scanf("%d",&s[i].mark);
            printf("Enter grade obtained by the student %d (100-85=A,85-60=B,60-45=C,45-30=D,0-30=F)) : ",i+1);
            scanf("%s",&s[i].grade);     
      }
}

void inputkey(int *key)
{
	      printf("\nEnter the roll number,to get details of the student :  ");
	      scanf("%d",key);
}

int search(int key,int *check,int *pos,int n,struct student s[])
{
	      *check=0;
	       for(int i=0;i<n;i++)
      		    if(key==s[i].rollno)
			        {
				            *check=1;
                    *pos=i;
			         }
	        return *check;
	
}

void output(int check,int pos,int n,struct student s[])
{
		if(check==1)
		{
			    printf("\nRoll number : %d  \n",s[pos].rollno);
			    printf("Department : %s  \n",s[pos].dept);
			    printf("Name : %s \n",s[pos].name);
			    printf("Marks : %d  \n",s[pos].mark);
         	printf("Grade : %s \n",s[pos].grade);
		}
	   else
			    printf("Entered roll number does not exist in the entered list. Try again.\n");
}

int main()
{
        int n,key,check,pos;
        inputn(&n);
        struct student s[n];
        inputdetails(n,s);
	      inputkey(&key);	
	      search(key,&check,&pos,n,s);
       	output(check,pos,n,s);
	      return 0;
}
	
	
	
