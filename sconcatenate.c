//Concatenate two strings without using library functions
#include<stdio.h>
int main()
{
 char a[50],b[50];int i,j,len=0;
 printf("Enter two strings : ");
 gets(a);
 gets(b);
 while(a[len++]!='\0');
 printf("The concatenated strings are : ");
 for (i=len-1,j=0;b[j]!='\0';i++,j++)
 a[i]=b[j];
 puts(a);
}

