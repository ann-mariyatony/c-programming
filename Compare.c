#include <stdio.h>
#include <string.h>
int main()
{
char str1[30],str2[30];
printf("Enter the First string:");
scanf("%[^\n]",str1);
printf("Enter the second string:");
char c=getchar();
scanf("%[^\n]",str2);
 int result=strcmp(str1,str2);
if(result==0)
 {
   printf(" Strings are Equal");
 }
else
 {
  printf(" Strings are not equal");
}
return 0;
}

