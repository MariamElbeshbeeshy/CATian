#include <stdio.h>
#include <stdlib.h>

int GetBit(int num,int n);

int main()
{
    int num, n, bit;
    printf("enter your number : ");
    scanf("%d",&num);
    printf("enter nth bit to check (0-31) : ");
    scanf("%d",&n);
    bit=GetBit(num,n);
    if(bit==1)
        printf("bit equals 1");
    else
        printf("bit equals 0");
    return 0;
}

int GetBit(int num,int n)
{
    return (num>>n)&1;
}
