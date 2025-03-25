#include <stdio.h>
int main()
{
int n,i=1,fact=1;
printf("Enter the number:");
scanf("%d",&n);
if (n<=0)
   { 
     printf("Invalid entry");
   }
 else
   {
     while(i<=n)
        {
          fact=fact*i;
          i++;
         }
         printf("Factorial= %d",fact);  
      }
return 0;
}
