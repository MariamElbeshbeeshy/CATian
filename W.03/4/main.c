#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void login (char name[],char pass[])
{
    if (strcmp(name,"mariam")==0)
    {
        if (strcmp(pass,"12345")==0)
        {
            printf("Welcome!");
        }
        else
            printf("Wrong password!");
    }
    else
            printf("User not found!");
}

int main()
{
    char userName[100],pass[100];
    printf("Enter your name: ");
    scanf("%s",&userName);
    printf("Enter your password: ");
    scanf("%s",&pass);
    login(userName,pass);
    return 0;
}
