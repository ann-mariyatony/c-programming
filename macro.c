#include <stdio.h>
#define pi 3.14159
#define circle(r)(pi*r*r)
#define cylinder(r,h)(2*pi*r*(r+h))
int main()
{
float r,h,area,surfaceArea;
printf("Enter the radius of circle and cylinder:");
scanf("%f",&r);
printf("Enter the height of the cylinder");
scanf("%f",&h);
area=circle(r);
surfaceArea = cylinder(r,h);
printf("Area of the circle:%.2f\n",area);
printf("Area of the  cylinder:%.2f",surfaceArea);
return 0;
}

