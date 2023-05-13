#include <stdio.h>
#include <stdlib.h>

int sumOfDigits (int n);

int main()
{
    int n,s;
    printf("please enter number:");
    scanf("%d",&n);
    s=sumOfDigits(n);
    printf("sum of digits = %d",s);
    return 0;
}

int sumOfDigits (int n)
{
    int digit,sum;
    while(n!=0)
    {
        digit=n%10;
        sum+=digit;
        n/=10;
    }
    return sum;
}
