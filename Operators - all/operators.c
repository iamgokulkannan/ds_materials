#include<stdio.h>
#include<stdbool.h>
int main(){
    int x=10,y;
    y=x;
    printf("\nx = %d , y = %d\n",x,y);

    /*
    // Arithmetic operators - Binary Operators
    */

    printf("Arithmetic operators - Binary Operators\n");
    printf("\nx+y = %d\n",x+y);
    printf("x-y = %d\n",x-y);
    printf("x*y = %d\n",x*y);
    printf("x/y = %d\n",x/y);
    printf("x%%y = %d\n\n",x%y);

    /*
    // Arithmetic operators - Unary Operators
    */

    int a=10;
    int b=a++;
    int c=++a;
    int d=a--;
    int e=--a;
    printf("Arithmetic operators - Unary Operators\n");
    printf("a = %d\n",a);
    printf("\na++ = %d\n",b);
    printf("++a = %d\n",c);
    printf("a-- = %d\n",d);
    printf("--a = %d\n\n",e);

    /*
    // Comparision operators
    */
    printf("Comparision operators\n");
    printf("x>y = %d\n",x>y);
    printf("x<y = %d\n",x<y);
    printf("x>=y = %d\n",x>=y);
    printf("x<=y = %d\n",x<=y);
    printf("x==y = %d\n",x==y);
    printf("x!=y = %d\n\n",x!=y);

    /*
    // Logical Operators
    */

    int z=20;
    printf("Logical Operators\n");
    printf("z = %d\n",z);
    bool res=(z>10 && z<10);
    printf("\nres = z>10 && z<10 = %d\n",res);
    res = (z>0 || z>y);
    printf("res = z>0 || z>y = %d\n",res);
    res = !res;
    printf("res = !res = %d\n",res);

    /*
    // Short Circuting - Logical Operators
    */

    int j = 5;
    bool shot = (j>10 && j++);
    printf("Short Circuting - Logical Operators\n");
    printf("\nshot = j>10 && j++ = %d\n",shot);
    printf("j = %d\n",j);
    shot = (j++ && x>10);
    printf("shot = j++ && x>10 = %d\n",shot);
    printf("j = %d\n",j);


    /*
    // Bitwise Operators
    */
    
    int b1 = 3, b2 =6, b3=33;
    unsigned int u = 1;
    printf("Bitwise Operators\n");
    printf("\nb1 = %d , b2 = %d , b3 = %d\n",b1,b2,b3);
    printf("b1&b2 = %d\n",b1&b2);
    printf("b1|b2 = %d\n",b1|b2);
    printf("b1^b2 = %d\n",b1^b2);
    printf("b1<<1 = %d\n",b1<<1);
    printf("b1<<2 = %d\n",b1<<2);
    printf("b1<<b2 = %d\n",b1<<b2);
    printf("b3>>1 = %d\n",b3>>1);
    printf("b3>>2 = %d\n",b3>>2);
    printf("b3>>b2 = %d\n",b3>>b2);
    printf("u = %u\n",u);
    printf("~u = %u\n",~u);
    printf("~b1 = %d\n",~b1);

}