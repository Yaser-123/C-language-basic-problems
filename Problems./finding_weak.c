#include<stdio.h>
void main()
{
    int day;
    printf("enter weak number : ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:

        printf("Monday");

        break;

    case 2:

        printf("tuesday");

        break;

    case 3:

        printf("wednesday");

        break;

    case 4:

        printf("thursday");

        break;

    case 5:

        printf("friday");

        break;

    case 6:

        printf("saturday");

        break;

    case 7:

        printf("sunday");

        break;
    
    default:
        printf("Invalid weak number");
        break;
    }
}