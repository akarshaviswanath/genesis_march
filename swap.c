#include<stdio.h>
main()
{
    int a,b;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a+b;
    printf("now the swapped values are= %d,%d\n", a, b);
}
