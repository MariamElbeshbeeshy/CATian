#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100], detect;
    int i;
    printf("Enter your string: ");
    gets(s);
    printf("%s",s);
    printf("Enter the char you are looking for: ");
    scanf("%c",&detect);
    for (i=0; i<strlen(s); i++)
    {
        if (s[i]==detect)
            break;
    }
    if (i<strlen(s))
        printf("char exist in index:%d", i+1);
    else
        printf("character dosn't exist.");
    return 0;
}
