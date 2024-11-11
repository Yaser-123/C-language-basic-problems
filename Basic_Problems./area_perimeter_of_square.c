#include<stdio.h>

void main()
{
    float side,area,perimeter;

    printf("\n Enter the Length of Side : ");
    scanf("%f",&side);

    area = side * side ;

    perimeter = 4 * side ;

    printf("\n Area of Square : %f \n Perimeter of square : %f",area,perimeter);
}