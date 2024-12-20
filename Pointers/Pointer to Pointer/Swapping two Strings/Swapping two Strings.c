#include<stdio.h>
void swapStrings(char **s1, char **s2){
    const char *temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}
int main(){
    const char *s1="Gfg", *s2="Courses";
    swapStrings(&s1,&s2);
    printf("%s %s",s1,s2);
}