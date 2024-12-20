#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="geeks";
    char s2[]={'g','f','g','\0'};
    printf("%s %s\n",s1,s2);
    printf("%zu %zu\n",sizeof(s1),sizeof(s2));
    printf("%d %d",strlen(s1),strlen(s2));
}