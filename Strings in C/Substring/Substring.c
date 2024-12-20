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
    /* for all occurrence
    if(p==NULL){
        printf("Not Found");
    }
    while(p){
        printf("%ld\n",p-txt);
        p=str(p+1,pat);
    }
    */
}