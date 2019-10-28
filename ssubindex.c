//WAP to extract substring when starting and ending index is given

#include<stdio.h>
void main()
{
 char a[50];int u,i,l;
 printf("Enter a string : ");
 scanf("%[^\n]s",a);
 printf("Enter the starting and ending index : ");
 scanf("%i %i",&l,&u);
 printf("The substring is : ");
 for(i=l;i<u;i++)
  printf("%c",a[i]);
}
