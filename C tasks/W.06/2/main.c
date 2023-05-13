#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    printf("Enter your string: ");
    scanf("%s",s);
    int i,asum=0,dsum=0,ssum=0;
    while(s[i]!='\0')
    {
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
            asum++;
        else if (s[i]>='0' && s[i]<='9')
            dsum++;
        else
            ssum++;
        i++;
    }
    printf("total count of alphapets: %d,total count of digits: %d,total count of sspecial characters: %d",asum,dsum,ssum);
    return 0;
}
