#include<stdio.h>
void swap(int a, int b);
void main()
{
    int a,b;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    printf("a=%d, b=%d",a,b);
    swap(a,b);
}
void swap(int a, int b)
{
    int temp;
    temp=b;
    b=a;
    a=temp;
    printf("\n");
    printf("a=%d, b=%d",a,b);
}