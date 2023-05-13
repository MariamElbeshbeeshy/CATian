#include <stdio.h>
#include <stdlib.h>

float calc(char op,float num1,float num2);

int main()
{
    char op;
    float res,num1,num2;
    printf("enter operator(+,-,/,*): ");
    scanf("%c",&op);
    printf("enter first operand:");
    scanf("%f",&num1);
    printf("enter second operand:");
    scanf("%f",&num2);
    res=calc(op,num1,num2);
    printf("result is = %f",res);
    return 0;
}

float calc(char op,float num1,float num2)
{
    float res;
    switch(op)
    {
        case '+':
            res=num1+num2;
            break;
        case '-':
            res=num1-num2;
            break;
        case '*':
            res=num1*num2;
            break;
        case '/':
            if (num2!=0)
                res=num1/num2;
            else
                printf("can't be calculated.");
            break;
    }
    return res;
}
