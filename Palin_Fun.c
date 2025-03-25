#include<stdio.h>
void palindrome(int);
int main()
{
int n;
palindrome(n);
return 0;
}
void palindrome(int a)
{
int rem,rev=0,org_num;
printf("Enter the number:");
scanf("%d",&a);
org_num=a;
for(rev=0;a>0;a=a/10)
{
  rem=a%10;
  rev=rev*10+rem;
}
if(org_num==rev)
 {
   printf("The number is a palindrome");
  }
else
{
  printf("The number is not a palindrome");
 }
 }
