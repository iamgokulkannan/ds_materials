#include<stdio.h>
int main(){
    int n,count=1;
    printf("Enter a number n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=10;j++){
            count=i*j;
            printf("%d ",count);
        }
        printf("\n");
    }

}