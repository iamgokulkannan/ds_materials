#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr = fopen("./Writing to a file", "w");
    fprintf(fptr, "Content to be written");
    fclose(fptr);
    puts("Values have been added to the file");
    return 0;
}