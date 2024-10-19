#include<stdio.h>
void main()
{
    int a[1000],i,N,max,min;
    printf("Enter size of the array : ");
    scanf("%d",&N);
    printf("Enter array elements : ");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(i=0;i<N;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        else if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("The maximum element is : %d\n",max);
    printf("The minimum element is %d",min);
}