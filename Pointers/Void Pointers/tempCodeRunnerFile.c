#include<stdio.h>
int main(){
    int x=10;
    void *p1 = &x;
    int *p2 = p1;
    char y = 'G';
    char *p3 = &y;
    p1 = p3;
}