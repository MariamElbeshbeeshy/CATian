#include <stdio.h>
#include <stdlib.h>

void mul (int* p0, int* p1,int *p2,int n);
int main()
{
    int n,res=0;
    printf("please enter size of arrays:");
    scanf("%d",&n);
    int a[n],b[n];
    printf("please enter elements of first array:");
    for (int i=0; i<n; i++)
    {
        scanf("%d",a+i);
    }
    printf("please enter elements of second array:");
    for (int i=0; i<n; i++)
    {
        scanf("%d",b+i);
    }
    mul(a,b,&res,n);
    printf("result of scalar multiplication:%d",res);
    return 0;
}

void mul (int* p0, int* p1,int *p2,int n)
{
    for(int i=0; i<n; i++)
    {
        *p2+=(*(p0+i))*(*(p1+i));
    }
}
