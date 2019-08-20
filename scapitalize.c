//WAP in C to input sentence and capitalize first letter each word.
#include<stdio.h>
void main()
 {
  char a[50];int i;
  printf("Enter a string : ");
  scanf("%[^\n]s",a);
  printf("The new string is : ");
  a[0]-=32;
  for (i=1;a[i]!='\0';i++)
  {
   if(a[i]==' ')
   {
    while(a[i++]==' ');
    a[i-1]-=32;
   }
  }
 puts(a);
}
