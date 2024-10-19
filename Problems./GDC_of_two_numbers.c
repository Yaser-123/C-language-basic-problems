#include<stdio.h>
void main()
{
    int n1,n2;
    printf("Enter two numbers to find GDC : ");
    scanf("%d%d",&n1,&n2);
    printf("The GDC of %d and %d is %d",n1,n2,GDC(n1,n2));
}
int GDC(int n1,int n2);
int GDC(int n1,int n2)
{
    if (n2!=0)
    {
        return GDC(n2,n1%n2);
    }
    else 
    return n1;
}