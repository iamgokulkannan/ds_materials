#include<stdio.h>
int main(){
    int n,x;
    printf("Enter a number n : ");
    scanf("%d",&a);
    if(n==0)
        printf("0 is neither odd nor even");
    else{
        x=n%2;
        if(x==0)
            printf("%d is even",n);
        else
            printf("%d is odd",n);
    }
}
