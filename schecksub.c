//Check whether a string is a substring of another
#include<stdio.h>
#include<string.h>
int main()
{
 char a[50],b[50];int i,j,k,flag;
 printf("Enter two strings : ");
 gets(a);
 gets(b);
 printf("The second string is ");
 for (i=0;a[i]!='\0';i++)
 {
  if(a[i]==b[0])
  {
   flag=1;
   for(j=0,k=i;j<strlen(b);j++,k++)
   {
    if(a[k]!=b[j])
    {
     flag=0;
     break;
    }
   }
   if(flag==1)
   {
    printf("a substring of the first.");
    return 0;
   }
  }
 }
 printf("not a substring of the first.");
 return 0;
}
