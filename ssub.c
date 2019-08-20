//Extract a substring when length and index is given
#include<stdio.h>
void main()
{
 char a[50];int i,j,k,l;
 printf("Enter a string : ");
 scanf("%[^\n]s",a);
 printf("Enter the length of the substring and the index from where it is to be extracted : ");
 scanf("%i %i",&l,&i);
 printf("The substring is : ");
 for(j=l,k=i;j>0;j--,k++)
 {
  if(a[k]=='\0')
  k=0;
  printf("%c",a[k]);
 }
}
