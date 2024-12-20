#include <stdio.h>
union test
{
    /* data */
    int x;
    char arr[4];
};
int main()
{
    union test t;
    t.x = 512;
    printf("%d %d %d %d", t.arr[0], t.arr[1], t.arr[2], t.arr[3]);
    return 0;
}