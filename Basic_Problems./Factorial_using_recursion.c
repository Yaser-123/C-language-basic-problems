#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The factorial is %d",factorial(num));
}
int factorial(int num);
int factorial(int num)
{
    int fact;
    if(num<=1)
    {
        return 1;
    }
    else
    {
        fact = num*factorial(num-1);
        return fact;
    }
}