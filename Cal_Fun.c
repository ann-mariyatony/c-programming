#include<stdio.h>
int add(int,int);
void cal(int,int);
int main()
{
int x,y,result;
printf("Enter the elements:");
scanf("%d %d",&x,&y);
result=add(x,y);
printf("Sum=%d",result);
cal(x,y);
return 0;
}
int add(int a,int b)
{
 int sum=0;
 sum=a+b;
 return sum;
}
void cal(int a,int b)
{
 int mul=1,div,sub=0;
 mul=a*b;
 printf("\nProduct=%d",mul);
 if(b!=0)
             {
                 div=a/b;
                  printf("\nQuotient=%d",div);
              
               }
      else
              {
                printf("\nDivision cannot be performed");
              }
sub=a-b;
printf("\nDifference=%d",sub);
}
