#include <stdio.h>
#include <stdlib.h>

void count (int n);

int main()
{
    int n;
    printf("please enter number:");
    scanf("%d",&n);
    count(n);
    return 0;
}

void count (int n)
{
    int digit, zeros=0, ones=0;
    while(n!=0)
    {
        digit=n%10;
        n/=10;
        if (digit==0)
            zeros++;
        if (digit==1)
            ones++;
    }
    printf("number of zeros= %d, number of ones= %d",zeros,ones);
}
