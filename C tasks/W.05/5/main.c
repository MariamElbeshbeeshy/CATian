#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10, y=20, z=30;
    int *px=&x,*py=&y,*pz=&z;
    printf("value of x=%d, y=%d, z=%d\n",x,y,z);
    printf("value of px=%p, py=%p, pz=%p\n",px,py,pz);
    printf("value of *px=%d, *py=%d, *pz=%d\n",*px,*py,*pz);
    printf("\nSwapping pointers\n");
    pz = px;
    px = py;
    py = pz;
    printf("value of x=%d, y=%d, z=%d\n",x,y,z);
    printf("value of px=%p, py=%p, pz=%p\n",px,py,pz);
    printf("value of *px=%d, *py=%d, *pz=%d\n",*px,*py,*pz);
    return 0;
}
