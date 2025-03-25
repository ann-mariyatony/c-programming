#include <stdio.h>
int main()
{
int a,b,temp;
a=5;
b=3;
printf("a=%d and b=%d\n",a,b);
temp=a;
a=b;
b=temp;
printf("After swapping:");
printf("a=%d and b=%d",a,b);
return 0;
}
