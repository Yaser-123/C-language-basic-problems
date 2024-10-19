#include<stdio.h>
void main()
{
    int a[50][50],b[50][50],mul[50][50],r1,c1,r2,c2,i,j,k;
    printf("Enter the rows and columns of first matrix : ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the elements for first matrix : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter the rows and columns of second matrix : ");
    scanf("%d%d",&r2,&c2);
    printf("Enter the elements for second matrix : \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(r1==c2)
    {
        printf("The matrix mltiplication is : \n");
         for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c1;k++)
            {
                mul[i][j]+=a[i][k]*b[k][i];
            }
        }
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
           printf("%3d",mul[i][j]);
        }
        printf("\n");
    }

    }
    
    else
    {
        printf("Matrix mltiplication is not possible");
    }
}