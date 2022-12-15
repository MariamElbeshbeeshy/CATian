#include <stdio.h>
#include <stdlib.h>

int x=5, y=10;

void swap()
{
    int c;
    c=x;
    x=y;
    y=c;
}

int main()
{
    printf("Before swapping X=%d, Y=%d\n",x,y);
    swap();
    printf("After swapping X=%d, Y=%d",x,y);
    return 0;
}
