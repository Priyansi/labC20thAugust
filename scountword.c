//Count words in a string
#include<stdio.h>
void main()
{
 char a[50];int i,c=0;
 printf("Enter a string : ");
 scanf("%[^\n]s",a);
 printf("Number of words : ");
 for (i=0;a[i]!='\0';i++)
 {
  if(a[i]==' ')
  {
   while(a[i++]==' ');
   c++;
  }
 }
 printf("%i",c+1);
}
