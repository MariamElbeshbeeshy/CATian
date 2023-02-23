#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    printf("Enter your string: ");
    scanf("%s",s);
    int length=strlen(s);
    for (int i=0; i<length; i++)
    {
        printf("%c",s[length-i-1]);
    }
    return 0;
}
