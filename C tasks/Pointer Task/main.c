#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr= (int*) malloc(5*sizeof(int));
    ptr=realloc(ptr,7*sizeof(int));
    free(ptr);
    ptr=NULL;
    return 0;
}
