#include <stdio.h>
#include <stdlib.h>

void MinMax(int *arr,int n,int *min,int *max);

int main()
{
    int n, min, max;
    min=10e5;
    max=-10e5;
    printf("please enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("please enter %d elements: ",n);
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    MinMax(arr,n,&min,&max);
    printf("The maximum is %d, the minimum is %d",max,min);
    return 0;
}

void MinMax(int arr[],int n,int *min,int *max)
{
    for (int i=0; i<n; i++)
    {
        if (arr[i]>*max)
            *max=arr[i];
        if (arr[i]<*min)
            *min=arr[i];
    }
}
