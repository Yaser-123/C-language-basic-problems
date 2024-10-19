#include<stdio.h>
void main()
{
    int num,N;
    printf("Enter the number : ");
    scanf("%d",&num);
    N = num % 2;
    if (N==0)
    {
        printf("The number %d is even",num);
    }
    else
    {
        printf("the number %d is odd",num);
    }

}