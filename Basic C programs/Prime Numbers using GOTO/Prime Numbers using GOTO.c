#include<stdio.h>
int main(){
    int n;
    printf("Enter a number to check whther it is prime or not : ");
    scanf("%d",&n);
    print:
        printf("%d is a Prime Number",n);
        return 0;
    for(int i=2;i<n;i++){
        if(i%n==0){
            printf("%d is not a Prime Number",n);
            return 0;
        }
        else{
            goto print;
        }
    }
}