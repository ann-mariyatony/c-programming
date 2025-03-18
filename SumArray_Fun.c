#include <stdio.h>
void sum(int arr[],int size);
int main()
{
int size;
printf("Enter the array  size:");
scanf("%d",&size);
int arr[size];
sum(arr,size);
return 0;
}
void sum(int arr[],int size)
{
int sum=0,i;
printf("Enter the elements:");
for(i=0;i<size;i++)
{
  scanf("%d",&arr[i]);
  sum=sum+arr[i];
 }
printf("Sum of the elements in the array = %d",sum);
}

