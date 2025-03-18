#include <stdio.h>
void array1(int arr[],int size);
void array2(int arr[],int size);
int main()
{
int size;
printf("Enter the array  size:");
scanf("%d",&size);
int arr[size];
array1(arr,size);
array2(arr,size);
return 0;
}
void array1(int arr[],int size)
{
printf("Enter the elements:");
for(int i=0;i<size;i++)
{
  scanf("%d", &arr[i]) ;
 }
 }
 void array2(int arr[],int size)
{
printf("The elements are :");
for(int i=0;i<size;i++)
{
  printf("%d \n ", arr[i]);
 }
 }
 
