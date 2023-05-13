#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include <stdbool.h>

int main()
{
    int id;
    bool flag = false;
    student std[10] = { 123450,95,60,45,70 };
    for (int i = 1; i < 10; i++)
    {
        //giving random values
        std[i].ID = std[i - 1].ID + 1;
        std[i].programming = rand() % 100;        //std[i-1].programming-5;
        std[i].dataStructure = rand() % 100;      //std[i-1].dataStructure+4;
        std[i].discreteMath = rand() % 100;       //std[i-1].discreteMath+6;
        std[i].algorithms = rand() % 100;         //std[i-1].algorithms+3;
    }
    printf("Enter your ID:");
    scanf("%d", &id);
    for (int i = 0; i < 10; i++)
    {
        if (id == std[i].ID)
        {
            printf("programming grade=%d ,dataStructure grade=%d, discreteMath=%d, algorithms=%d",
                std[i].programming, std[i].dataStructure, std[i].discreteMath, std[i].algorithms);
            flag = true;
        }
    }
    if (!flag)
        printf("Wrong ID!");
    return 0;
}
