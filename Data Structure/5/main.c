#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long powerOfNum(n,power);

int main()
{
    int n,power;
    long res;
    printf("please enter number:");
    scanf("%d",&n);
    printf("please enter power:");
    scanf("%d",&power);
    /*res=pow(n,power);
    printf("\n%d",res);*/
    res=powerOfNum(n,power);
    printf("power of number = %ld",res);
    return 0;
}

long powerOfNum(n,power)
{
    long res=1;
    for(int i=0; i<power; i++)
        res*=n;
    return res;
}
