#include <stdio.h>
#include <string.h>
struct employee
{
    /* data */
    int id;
    char name[100];
};
int main()
{
    struct employee e;
    e.id = 10;
    strcpy(e.name, "Abc");
    printf("%d %s", e.id, e.name);
}