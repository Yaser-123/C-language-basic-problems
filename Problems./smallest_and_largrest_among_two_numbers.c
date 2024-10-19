#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        printf("%d is smallest",a);
    }
    else if(b<a)
    {
        printf("%d is smallest",b);
    }
    else if(a>b)
    {
        printf("%d is largest",a);
    }
    else if (b>a)
    {
        printf("%d is largest",b);
    }
    else if(a==b)
    {
        printf("%d is equal to %d",a,b);
    }
    else
    {
        printf("Invalid number");
    }
}