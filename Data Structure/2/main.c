#include <stdio.h>
#include <stdlib.h>

void leapOrNot(int y);

int main()
{
    int y;
    printf("please enter year:");
    scanf("%d",&y);
    leapOrNot(y);
    return 0;
}

void leapOrNot(int y)
{
    if(y%4==0 && y%100!=0 || y%400==0)
        printf("Year is LEAP");
    else
        printf("Year is NOT LEAP");
}
