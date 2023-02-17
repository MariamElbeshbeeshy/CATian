#include <stdio.h>
#include <stdlib.h>

void sort(int *arr,int n);
int main()
{
    int n;
    printf("please enter size of arrays:");
    scanf("%d",&n);
    int arr[n];
    printf("please enter elements of the array:");
    for (int i=0; i<n; i++)
    {
        scanf("%d",arr+i);
    }
    sort(arr,n);
    printf("the sorted array: ");
    for (int i=0; i<n; i++)
    {
        printf("%d\t",*(arr+i));
    }
    return 0;
}

void sort(int *a,int n)
{
   for (int i=0; i<n; i++)
   {
       for (int j=i+1; j<n; j++)
       {
           if (*(a+i)<*(a+j))
           {
               int temp=*(a+i);
               *(a+i)=*(a+j);
               *(a+j)=temp;
           }
       }
   }
}
