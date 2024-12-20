#include <stdio.h>
#include <string.h>
int main()
{
    char txt[] = "geeksforgeeks", pat[] = "eek";
    char *p = strstr(txt, pat);
    if (p)
    {
        printf("first occurrence is %ld", p - txt);
    }
    else
    {
        printf("not found");
    }
}