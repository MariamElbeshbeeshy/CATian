#include <stdio.h>
#include <stdlib.h>

int Minimum(int num1,int num2,int num3,int num4);
int Maximum(int num1,int num2,int num3,int num4);
int maxOfTwo(int n1, int n2);
int minOfTwo (int n1,int n2);

int main()
{
    int num1, num2, num3, num4, min, max;
    printf("please enter 1st number:");
    scanf("%d",&num1);
    printf("please enter 2nd number:");
    scanf("%d",&num2);
    printf("please enter 3rd number:");
    scanf("%d",&num3);
    printf("please enter 4th number:");
    scanf("%d",&num4);
    min=Minimum(num1,num2,num3,num4);
    max=Maximum(num1,num2,num3,num4);
    printf("The minimum number is %d\n",min);
    printf("The maximum number is %d\n",max);
    return 0;
}

int Minimum(int num1,int num2,int num3,int num4)
{
    return minOfTwo(num1,minOfTwo(num2,minOfTwo(num3,num4)));
}

int minOfTwo (int n1,int n2)
{
    if(n1<=n2)
        return n1;
    else
        return n2;
}

int Maximum(int num1,int num2,int num3,int num4)
{
    return maxOfTwo(num1,maxOfTwo(num2,maxOfTwo(num3,num4)));
}

int maxOfTwo(int n1, int n2)
{
    if(n1>=n2)
        return n1;
    else
        return n2;
}
