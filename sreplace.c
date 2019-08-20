//Replace all occurences of a given character in a string without using library functions
#include<stdio.h>
int main()
{
 char a[50],c1,c2;int i;
 printf("Enter a string : ");
 gets(a);
 printf("Enter the character to be replaced and the new character : ");
 scanf("%c %c",&c1,&c2);
 printf("The new string is : ");
 for (i=0;a[i]!='\0';i++)
 {
  if(a[i]==c1)
  a[i]=c2;
 }
 puts(a);
}

