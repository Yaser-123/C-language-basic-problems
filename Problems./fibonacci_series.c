#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",fib(i));
    }

}
int fib(int i);
int fib(int i)
{
    if (i==0)
    {
        return 0;
    }
    else if (i == 1)
    {
        return 1;
    }
    else
    return fib(i-1)+fib(i-2);
}