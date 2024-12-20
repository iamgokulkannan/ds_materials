#include<stdio.h>
int main(){
    int x=10,y=20;
    int z = x+x*y;
    printf("x = %d , y = %d\n",x,y);
    printf("z = x+x*y = %d\n",z);
    z = y/x*x;
    printf("z = y/x*x = %d\n",z);
    z=y=x;
    printf("z = y = x\ny = %d\nz = %d\n",y,z);
}