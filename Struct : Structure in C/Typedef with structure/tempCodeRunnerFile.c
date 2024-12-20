#include <stdio.h>
#include <string.h>
typedef struct employee
{
    /* data */
    int id;
    char name[100];
} emp;
int main()
{
    emp e;
    e.id = 10;
    strcpy(e.name, "Abc");
    printf("%d %s", e.id, e.name);
}