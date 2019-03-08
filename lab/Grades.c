#include<stdio.h>

void input(int *mark)
{
				printf("Please enter the marks you scored, Out of 100 .\n");
				scanf("%d",mark);
}

char findgrade(int mark)
{
				if(mark<=100 && mark>=80)
							return 'A';
				else if(mark<80 && mark>=60)
							return 'B';
				else if(mark<60 && mark>=45)
							return 'C';
				else if(mark<45 && mark>=30)
							return 'D';
				else if(mark<30 && mark>=0)
							return 'F';
				else 
							return 'E';
}

void output(char grade)
{
				if(grade=='E')
							printf("Error. Invalid marks entered. Try again.\n");
				else 
							printf("Based off entered marks, Your grade is %c ! ",grade);
}

int main()
{
				int mark;
				char grade;
				input(&mark);
				grade=findgrade(mark);
				output(grade);
}
