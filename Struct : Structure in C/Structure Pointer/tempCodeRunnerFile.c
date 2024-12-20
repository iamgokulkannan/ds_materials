#include <stdio.h>
typedef struct point
{
    /* data */
    int x, y;
} point;
int main()
{
    point p = {10, 20};
    point *ptr = &p;
    printf("%d %d\n", ptr->x, ptr->y);
    ptr->x = 100;
    ptr->y = 10;
    printf("%d %d", p.x, p.y);
    return 0;
}