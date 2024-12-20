#include<stdio.h>

void PrimeFactorization(int n){
    int count=0;
    for(int i = 1;i<=n;i++){
        count=0;
        if(n%i==0){
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    count++;
                }
            }
            if(count>=2){
                printf("%d ",i);
            }
        }
    }
}
int main(){
    int n;
    printf("Enter a number n : ");
    scanf("%d",&n);
    PrimeFactorization(n);
}