#include <stdio.h>
#include <stdlib.h>

int main()
{
        int arr[5][5],sum=0;
        for (int i=0; i<5; i++)
        {
            for (int j=0; j<5; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }

        for (int i=0; i<5; i++)
        {
            for (int j=0; j<5; j++)
            {
                sum+=arr[i][j];
            }
            printf("%d\t",sum);
            sum=0;
        }

        printf("\n");

        for (int i=0; i<5; i++)
        {
            for (int j=0; j<5; j++)
            {
                sum+=arr[j][i];
            }
            printf("%d\t",sum);
            sum=0;
        }

    return 0;
}
