#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="gfg", s2[]="courses";
    printf("%d\n",strcmp(s1,s2));
    printf("%d\n",strcmp(s1,"gfg"));
    printf("%d\n",strcmp(s1,"GFG"));
    printf("%d\n",strcmp(s1,"gf"));
    printf("%d\n",strcmp(s1,"hf"));
}