#include<stdio.h>
void main()
{
    int r,c,a[100][100],b[100][100],sum[100][100],i,j;
    printf("Enter the number of rows in the matrix : \n");
    scanf("%d",&r);
    printf("Enter the number of columns in the matrix : \n");
    scanf("%d",&c);
    printf("Enter the elements of the matrix 1 : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the matrix 2 : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The sum of two matrix : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j] = a[i][j] +b[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%3d",sum[i][j]);
        }
        printf("\n");
    }

}