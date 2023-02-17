<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t;
    printf("Please enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Please enter the elements of array: ");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i=0; i<n; i++)
            {
                for (int j=i+1; j<n; j++)
                {
                    if (arr[i]<arr[j])
                    {
                        t=arr[i];
                        arr[i]=arr[j];
                        arr[j]=t;
                    }
                }
            }
    printf("second largest element in array: %d",arr[1]);
    return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t;
    printf("Please enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Please enter the elements of array: ");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i=0; i<n; i++)
            {
                for (int j=i+1; j<n; j++)
                {
                    if (arr[i]<arr[j])
                    {
                        t=arr[i];
                        arr[i]=arr[j];
                        arr[j]=t;
                    }
                }
            }
    printf("second largest element in array: %d",arr[1]);
    return 0;
}
>>>>>>> fd5e060efb2209cd60f8f0db75a5725966a301cf
