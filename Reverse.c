#include <stdio.h>
int main()
{
int i,j,len;
char str[50],temp;
printf ("Enter the string:");
scanf ("%[^\n]",str);
for(len=0;str[len]!='\0';len++);
 printf("length=%d",len);
for(i=len-1,j=0;j<len/2;i--,j++)
 {
   temp=str[i];
   str[i]=str[j];
   str[j]=temp;
 }
printf("\n Reversed string=%s",str);
return 0;
}
