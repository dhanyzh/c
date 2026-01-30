#include <stdio.h>
int main()
{
   int a,b,remainder;
   printf("enter the first number:\n ");
   scanf("%d",&a);
   printf("enter the second number:\n ");
   scanf("%d",&b);
   int q=a/b;
   int r=a-(q*b);
   printf("%d",r);
   return 0;
}
