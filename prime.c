#include<stdio.h>
int main()
{
int n,i,j,isprime;
printf("Enter the limit:");
scanf("%d",&n);
printf("Prime numbers are:");
for(i=2;i<=n;i++)
{
 isprime=1;
 for(j=2;j<=i/2;j++)
{
if (i%j==0)
 {
   isprime=0;
   break;
  }
}
if(isprime)
{
  printf("%d\n",i);
 }
 }
return 0;
}


