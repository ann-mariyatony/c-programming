#include <stdio.h>
int main ()
{
int r1,r2,c1,c2,i,j;
printf("Enter the size of first matrix:");
scanf("%d %d",&r1,&c1);
int a[r1][c1];
printf("Enter the elements:");
for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
      {
        scanf("%d",&a[i][j]);
       }
  }
printf("Enter the size of Second matrix:");
scanf("%d %d",&r2,&c2);
int b[r2][c2];
printf("Enter the elements:");
for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
      {
        scanf("%d",&b[i][j]);
       }
  }
 if (r1==r2 && c1==c2)
  {
    int c[r1][c1];
    printf("First matrix is: \n");
     for(i=0;i<r1;i++)
      {
       for(j=0;j<c1;j++)
        {
        printf("%d\t",a[i][j]);
        }
         printf("\n");
     } 
    printf("Second matrix is: \n");
    for(i=0;i<r2;i++)
    {
    for(j=0;j<c2;j++)
      {
        printf("%d \t",b[i][j]);
       } 
        printf("\n");
     }
    printf("The sum of the  two matrix is: \n");
    for(i=0;i<r1;i++)
      {
        for(j=0;j<c1;j++)
         {
           c[i][j]= a[i][j] + b[i][j];
          }
       }
       for(i=0;i<r1;i++)
      {
        for(j=0;j<c1;j++)
         {
            printf("%d\t",c[i][j]);
          }
          printf("\n");
       }
  }
else
   {
     printf("Matrix addition could not perform");
   }
 return 0;
 }
    
