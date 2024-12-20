#include<stdio.h>
int main(){
    int n,x;
    printf("Enter a number n , x : ");
    scanf("%d %d",&n,&x);
    for (int i=0;i<=n;i++){
        if(n%x==0)
            continue;
        printf("%d ",i);
    }
}