<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#define n 4

int fun(int arr[]);
int main()
{
    int arr[n],item;
    printf("please enter elements of the array:");
    for (int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
    item=fun(arr);
    printf("the repeated element is: %d",item);
    return 0;
}

int fun(int arr[])
{
    int item;
    for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (arr[i]==arr[j])
                {
                    item=arr[j];
                }
            }
        }
    return item;
}

=======
#include <stdio.h>
#include <stdlib.h>
#define n 4

int fun(int arr[]);
int main()
{
    int arr[n],item;
    printf("please enter elements of the array:");
    for (int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
    item=fun(arr);
    printf("the repeated element is: %d",item);
    return 0;
}

int fun(int arr[])
{
    int item;
    for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (arr[i]==arr[j])
                {
                    item=arr[j];
                }
            }
        }
    return item;
}

>>>>>>> fd5e060efb2209cd60f8f0db75a5725966a301cf
