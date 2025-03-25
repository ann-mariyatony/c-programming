#include<stdio.h>
int main()
{
int n,i,sum=0,avg;
printf("Enter the size of an array:");
scanf("%d",&n);
int a[n];
printf("Enter the elements:");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
avg=sum/n;
printf("\n Average= %d",avg);
return 0;
}


