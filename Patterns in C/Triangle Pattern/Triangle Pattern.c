#include<stdio.h>
int main(){
    int n;
    printf("Enter a number n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i){
                printf("* ");
            }
        }
        printf("\n");
    }
}