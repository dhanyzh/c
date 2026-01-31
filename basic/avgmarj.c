 #include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter maths mark:");
    scanf("%d",&a);
    printf("enter english mark:");
    scanf("%d",&b);
    printf("enter chemistry mark:");
    scanf("%d",&c);
    printf("enter biology mark:");
    scanf("%d",&d);
    printf("enter physics mark:");
    scanf("%d",&e);
    float av=(a+b+c+d+e)/5;
    printf("average mark=%0.2f",av);
    return 0;
}