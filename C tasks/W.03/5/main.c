#include <stdio.h>
#include <stdlib.h>

int fibonacii(int num)
{
    if (num>1)
    {
        return fibonacii(num-1)+ fibonacii(num-2);
    }
    else
        return num ;
}

int main()
{
    unsigned int num,res;
    printf("Please enter a number");
    scanf("%d",&num);
    printf("fibonacii of given number is: %d",fibonacii(num));
    return 0;
}
