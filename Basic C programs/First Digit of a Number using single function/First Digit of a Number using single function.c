#include<stdio.h>
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    while(x>10){
        x=x/10;
    }
    if(x<10){
        printf("First digit is %d",x);
    }
}