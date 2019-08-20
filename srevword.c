//Reverse words in their original positions
#include<stdio.h>
int main()
{
 char a[50];int i,j,k;
 scanf("%[^\n]s",a);
 for(i=strlen(a);i>0;i--)
 a[i]=a[i-1];
 a[0]=' ';
 a[strlen(a)]=' ';
 a[strlen(a)+1]='\0';
 for (i=0;a[i]!='\0';i++)
 {
  if(a[i]==' ')
  {
   if(a[i+1]=='\0')
   return 0;
   for(j=i+1; a[j]!=' ';j++);
   for(k=j-1;k>=i;k--)
   printf("%c",a[k]);
  }
 }
 return 0;
}