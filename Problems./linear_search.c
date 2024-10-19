#include<stdio.h>
void main()
{
    int a,n,count=0,i,arr[n];
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to find");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(a==arr[i])
        {
            printf("%d element found at %d position",a,i+1);
            count++;
        }
    }
    if(count==0)
    {
        printf("Element not found");
    }
    /*else
    {
        printf("%d is present is present %d times in an array",a,count);
    }*/
}