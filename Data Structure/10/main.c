#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int bin, deci;
    printf("enter number in binary: ");
    scanf("%d",&bin);
    deci=convert(bin);
    printf("The decimal num is: %d",deci);
    return 0;
}

int convert(int bin)
{
    int bit,deci=0,i=0;
    while(bin!=0)
    {
        bit=bin%10;
        deci+=bit*pow(2,i);
        i++;
        bin/=10;
    }
    return deci;
}
