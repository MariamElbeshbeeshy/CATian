#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[10];
    printf("Enter your string: ");
    scanf("%s",s);
    int length = strlen(s);
    for (int i=0; i<length; i++)
    {
        if (s[i]>=97)
            s[i]-=32;
    }
    printf("%s",s);
    return 0;
}
