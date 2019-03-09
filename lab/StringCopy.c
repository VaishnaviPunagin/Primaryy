#include<stdio.h>
void inputstring(char s[])
{
      printf("Enter some text, a space terminates the string.");
      scanf("%s",s);
}

void copy(char s1[], char s2[],int *i)
{
      int j=*i;
      for(j=0;s1[j]!='\0';j++)
     	      s2[j]=s1[j];
      s2[j]='\0';
}

void output(char s2[],int i)
{
      printf("Copied string is %s .",s2);
}

int main()
{ 
      char s1[100],s2[100];
      int i;
      inputstring(s1);
      copy(s1,s2,&i);
      output(s2,i);
      return 0;
}

