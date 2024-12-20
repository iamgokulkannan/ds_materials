#include <stdio.h>
#include <string.h>
typedef struct student
{
    /* data */
    int id;
    char name[100];
} student;

/*
void changeName(student s)
{
    strcpy(s.name, "gfg");
}
*/
void changeName(student *s)
{
    strcpy(s->name, "gfg");
}
/*
int main()
{
    student s = {101, "Abc"};
    changeName(s);
    printf("%d %s", s.id, s.name);
}
*/
int main()
{
    student s = {101, "Abc"};
    changeName(&s);
    printf("%d %s", s.id, s.name);
}