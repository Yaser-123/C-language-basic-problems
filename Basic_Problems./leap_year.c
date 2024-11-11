#include<stdio.h>
void main()
{
    int year;
    printf("which year you want to check \n");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("it's a leap year");
    }
    else if (year%4!=0)
    {
        printf("not a leap year");
    }
    else
    {
        printf("invalid year");
    }
    
}