#include<stdio.h>
int firstDigit(int x){
    while(x>10){
        x=x/10; // x/=10 can be used too instead of x=x/10;
    }
    return x;
}
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("\nhe First Digit is %d",firstDigit(x));
}