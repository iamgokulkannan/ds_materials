#include<stdio.h>
int main(){
    int n,x;
    printf("Enter a number n : ");
    scanf("%d",&n);
    x=n%2;
    if(n==0)
        printf("0 is neither positive nor negative and also neither even nor odd");
    else if(n<0){
        if(x==0)
            printf("negative even");
        else
            printf("negative odd");
    }
    else{
        if(x==0)
            printf("positive even");
        else
            printf("positive odd");
    }
}