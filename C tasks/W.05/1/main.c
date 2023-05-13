#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10;
    printf("value of x= %d\n",x);
    int *p=&x;
    *p=20;
    printf("value of x= %d",x);
    return 0;
}
