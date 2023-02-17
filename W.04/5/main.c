<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main()
{
        int arr[5][5],rsum[5]={0},csum[5]={0};
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
                rsum[i]+=arr[i][j];
                csum[i]+=arr[j][i];
            }
        }
        for (int i=0; i<5; i++)
        {
            printf("%d\t",rsum[i]);
        }

        printf ("\n");

        for (int i=0; i<5; i++)
        {
            printf("%d\t",csum[i]);
        }
}





=======
#include <stdio.h>
#include <stdlib.h>

int main()
{
        int arr[5][5],rsum[5]={0},csum[5]={0};
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
                rsum[i]+=arr[i][j];
                csum[i]+=arr[j][i];
            }
        }
        for (int i=0; i<5; i++)
        {
            printf("%d\t",rsum[i]);
        }

        printf ("\n");

        for (int i=0; i<5; i++)
        {
            printf("%d\t",csum[i]);
        }
}





>>>>>>> fd5e060efb2209cd60f8f0db75a5725966a301cf
