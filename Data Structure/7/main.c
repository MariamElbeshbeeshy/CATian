#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, odd=0, even=0;
    printf("please enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("please enter %d elements: ",n);
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i=0; i<n; i++)
    {
        if (arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("number of odd numbers: %d\n",odd);
    printf("number of even numbers: %d\n",even);
}
