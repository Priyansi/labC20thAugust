//Reverse a string without using library functions
#include<stdio.h>
void main()
 {
  char a[50];int i,len=0;
  printf("Enter a string : ");
  scanf("%[^\n]s",a);
  while(a[len++]!='\0');
  printf("The reverse string : ");
  for (i=len-2;i>=0;i--)
  printf("%c",a[i]); //if you want to save the reversed string take another string variable b and store in it character by character
 }
