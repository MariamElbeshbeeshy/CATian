#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    bool flag=true;
    printf("please enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("%d\t",arr[0]);
    for (int i=1; i<n; i++)
        {
            for (int j=0; j<i; j++)
            {
                if (arr[i]==arr[j])
                {
                    flag=false;
                }
            }
            if (flag)
            {
                printf("%d\t",arr[i]);
            }
            flag=true;
        }

    return 0;
}
