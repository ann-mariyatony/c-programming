#include<stdio.h>
int fact(int);
int main()
{
int a,result;
result=fact(a);
printf("Factorial=%d",result);
return 0;
}
int fact(int x)
{
int i,fact=1;
printf("Enter the number:");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
  fact=fact*i;
 }
return fact;
}
