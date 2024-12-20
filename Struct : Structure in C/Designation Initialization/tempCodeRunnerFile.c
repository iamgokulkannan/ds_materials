#include <stdio.h>
struct point
{
    /* data */
    int x, y;
    char z;
};
int main()
{
    struct point p1 = {.y = 10, .x = 20, .z = 'g'};
    printf("%d %d %c\n", p1.x, p1.y, p1.z);
    struct point p2 = {.y = 100};
    printf("%d %d %c", p2.x, p2.y, p2.z);
}