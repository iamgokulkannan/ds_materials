#include <stdio.h>
union test
{
    /* data */
    int x, y;
};
int main()
{
    union test t;
    t.x = 10;
    printf("%d %d\n", t.x, t.y);
    t.y = 20;
    printf("%d %d", t.x, t.y);
    return 0;
}