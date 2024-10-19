#include<stdio.h>
void main()
{
    int n,i,j,min,swap;
    printf("Enter thr number of elements in the array : ");
    scanf("%d",&n);
    printf("Enter the elements of an array :");
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
            if(min!=i)
            {
                swap=arr[i];
                arr[i] = arr[min];
                arr[min]=swap;
            }
    }
    printf("The sorted array is :");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}