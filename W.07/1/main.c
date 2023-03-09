#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main()
{
    employee mohsen, maged, mariam;
    printf("Please enter Mohsen's information: salary\tBonus\tDeduction\n");
    scanf("%d%d%d",&mohsen.salary,&mohsen.bonus,&mohsen.deduction);
    printf("Please enter Maged's information: salary\tBonus\tDeduction\n");
    scanf("%d%d%d",&maged.salary,&maged.bonus,&maged.deduction);
    printf("Please enter Mariam's information: salary\tBonus\tDeduction\n");
    scanf("%d%d%d",&mariam.salary,&mariam.bonus,&mariam.deduction);
    printf("\nMohsen's info:\n Salary:%d\tBonus:%d\tDeduction:%d",mohsen.salary,mohsen.bonus,mohsen.deduction);
    printf("\nMaged's info:\n Salary:%d\tBonus:%d\tDeduction:%d",maged.salary,maged.bonus,maged.deduction);
    printf("\nMariam's info:\n Salary:%d\tBonus:%d\tDeduction:%d",mariam.salary,mariam.bonus,mariam.deduction);
    return 0;
}

