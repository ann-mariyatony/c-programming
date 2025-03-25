#include <stdio.h>
int main()
{
int n1,n2,result;
char op;
printf("Enter the two numbers:");
scanf("%d %d",&n1,&n2);
printf("Enter the operator:");
scanf(" %c", &op);
switch (op)
     {
      case'+': result=n1+n2;
               printf("Result=%d",result);
               break;
      case'-': result=n1-n2;
               printf("Result=%d",result);
               break;
      case'*': result=n1*n2;
               printf("Result=%d",result);
               break;
      case'/': if(n2!=0)
                 {
                   result=n1/n2;
                   printf("Result=%d",result);
                   break;
                 }
              else
                  {
                    printf("Invalid entry");
                  }
      case'%': if(n2!=0)
                {
                  result=n1%n2;
                  printf("Result=%d",result);
                  break;
                }
              else
                {
                  printf("Invalid entry");
                  }
      default: printf("Invalid entry");
      }
return 0;
}

