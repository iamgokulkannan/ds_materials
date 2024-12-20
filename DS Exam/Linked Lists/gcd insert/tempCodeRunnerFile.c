#include<stdio.h>
int gcd_recursive(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd_recursive(b, a % b);
}
int main(){
    printf("%d",gcd_recursive(6,18));
}