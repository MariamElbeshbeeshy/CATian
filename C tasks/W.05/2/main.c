#include <stdio.h>
#include <stdlib.h>

int summation (int *x, int *y);

int main()
{
    int num1,num2,sum;
    printf("please enter two numbers to get their summation\n");
    scanf("%d%d",&num1,&num2);
    sum=summation(&num1,&num2);
    printf("summation is: %d",sum);
    return 0;
}
int summation (int *x, int *y)
{
    int sum=*x+*y;
    return sum;
}
