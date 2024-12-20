#include <stdio.h>
union punning
{
    /* data */
    int x;
    float y;
};
int main()
{
    union punning p;
    p.y = 1.1;
    printf("%d", p.x);
    return 0;
}