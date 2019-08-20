//Delete the duplicate characters in a string
#include<stdio.h>
void main()
{
 char a[50],i,j;int k;
 printf("Enter a string : ");
 scanf("%[^\n]s",a);
 printf("The new string is : ");
 for (i='a',j='A';i<='z';i++,j++)
 {
  for(k=0;a[k]!='\0';k++)
  {
   if(a[k]==i || a[k]==j)
   printf("%c",a[k]);
  }
 }
}
