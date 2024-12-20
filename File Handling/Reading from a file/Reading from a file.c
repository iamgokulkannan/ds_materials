#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr = fopen("./Reading from a file.c", "r");
    char ch;
    ch = getc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(fptr);
    }
    fclose(fptr);
    return 0;
}