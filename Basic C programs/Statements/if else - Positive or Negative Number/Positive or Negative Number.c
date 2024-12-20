#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num==0)
        printf("\n0 is neither positive nor negative");
    else if(num>1)
        printf("\n%d is positive",num);
    else    
        printf("\n%d is negative",num);
}