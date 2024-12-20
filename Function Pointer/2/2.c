#include <stdio.h>
int fun(int x, int y)
{
    return x + y;
}
int main()
{
    int (*fun_ptr)(int, int) = fun;
    printf("%d", fun_ptr(10, 20));
}