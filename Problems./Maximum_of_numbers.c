#include<stdio.h>
void main() 
{
    int arr[100],max,min,i,n;
    printf("Enter the size of N elements\n");
    scanf("%d",&n);
    printf("Enter %d values",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
        max = arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Maximun value of given  %d elements is %d\n",n,max);
    printf("Minimum value of given  %d elements is %d\n",n,min);
}