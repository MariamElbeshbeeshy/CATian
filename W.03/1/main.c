#include <stdio.h>
#include <stdlib.h>

int getMax(int num1, int num2)
{
    int x;
    x=(num1>num2)?(num1):(num2);
    return x;
}

int main()
{
    int num1, num2,max;
    printf("Please enter two values: ");
    scanf("%d%d",&num1,&num2);
    max=getMax(num1,num2);
    printf("Maximum is: %d",max);
    return 0;
}
