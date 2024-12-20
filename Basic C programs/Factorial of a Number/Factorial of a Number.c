#include<stdio.h>
int main(){
    int n,count=1,ans=1;
    printf("Enter a number to find the factorial : ");
    scanf("%d",&n);
    // for loop
    printf("1. Using For Loop\n\n");
    for(int i=1;i<=n;i++){
        count=count*i;
    }
    printf("The factorial of %d is %d\n",n,count);
    // while loop
    printf("2. Using While Loop\n");
    while(n>0){
        ans=ans*n;
        n--;
    }
    printf("The factorial of %d is %d\n",n,ans);
}