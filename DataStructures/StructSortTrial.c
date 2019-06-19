#include<stdio.h>
#include<stdlib.h>

struct student
{
	int age;
	char name[100];
};

int howmany()
{
	int n;
	printf("How many students' data ? : ");
	scanf("%d",&n);
	return n;
}

void getdata(int n, struct student s[])
{
	for(int i=0;i<n;i++)
	{
		printf("Student[%d]'s details:\n Name : ",i+1);
		scanf("%s",s[i].name);
		printf("Please enter age : ");
		scanf("%d",&s[i].age);
		printf("\n");
	}
}

void display(int n, struct student s[])
{
	printf("\n******Stored details are:******\n");	
	for(int i=0;i<n;i++)
	{
		printf("Student[%d]'s details:\nName : %s\n",i+1,s[i].name);
		printf("Age : %d\n\n",s[i].age);
	}
}

int comparebyage(const void *a,const void *b)
{
	struct student *p=(struct student *)a;
	struct student *q=(struct student *)b;
	return (p->age-q->age);

}

void sortbyage(int n, struct student s[])
{
	qsort(s,n,sizeof(struct student),comparebyage);
	printf("\nStudent details sorted by age are : \n");
	display(n,s);
}

int main()
{
	int n=howmany();
	struct student s[n];
	getdata(n,s);
	display(n,s);
	sortbyage(n,s);
	//sortbyname(n,s);
}
