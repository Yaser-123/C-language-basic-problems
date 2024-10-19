#include<stdio.h>
void main()
{
    int i,n,count=0;
    printf("Enter any positive number : ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        printf("The number %d is prime number",n);
    }
    else
    {
        printf("the number is %d not prime number",n);
    }
}