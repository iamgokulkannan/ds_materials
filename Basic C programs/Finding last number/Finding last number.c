#include<stdio.h>
int main(){
    int n;
    printf("Enter a number N : ");
    scanf("%d",&n);
    int x=n%10;
    if(x>=0){
    printf("The last digit of %d is = %d",n,x);
    }
    else{
        int ans = -x;
        printf("The last digit of %d is = %d",n,ans);
    }
}