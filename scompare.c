//Compare two strings without using library functions
#include<stdio.h>
#include<string.h>
int main()
{
 char a[50],b[50];int i;
 printf("Enter two strings : ");
 gets(a);
 gets(b);
 //alternate way to find length <integer variable>=printf("%s",a);
 printf("The strings are ");
 for (i=0;strlen(a)>strlen(b)?a[i]!='\0':b[i]!='\0';i++)
 {
  if(a[i]!=b[i])
  {
   printf("not equal at index %i and the differing characters are %c and %c.",i,a[i],b[i]);
   return 0;
  }
 }
 printf("equal.");
 return 0;
}

