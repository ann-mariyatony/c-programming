#include<stdio.h>
int main()
{
float radius,area;
const float pi=3.14;
printf("Enter the radius:");
scanf("%f",&radius);
area=pi*radius*radius;
printf("Area of a circle is :%f",area);
return 0;
}

