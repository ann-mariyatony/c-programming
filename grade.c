#include <stdio.h>
int main()
{
int rollno,age;
float height;
char grade;
printf("Enter the roll no.:");
scanf("%d",&rollno);
printf("\n Enter age:");
scanf("%d",&age);
printf("\n Enter height:");
scanf("%f",&height);
printf("\n Enter grade:");
scanf(" %c",&grade);
printf("\n Roll no. is %d",rollno);
printf("\n Age is :%d",age );
printf("\n Height is :%f cm",height);
printf("\n Grade is %c ",grade);
return 0;
}
