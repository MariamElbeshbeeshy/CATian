#include <stdio.h>
#include <stdlib.h>

int count=0;

void digits(int num)
{
    int r;
    if (num)
    {
        r=num%10;
        count++;
        digits(num/10);
    }
}

int main()
{
    int num;
    printf("please enter number:");
    scanf("%d",&num);
    digits(num);
    printf("number of digits:%d",count);
    return 0;
}
