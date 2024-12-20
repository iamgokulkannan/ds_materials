#include<stdio.h>
int main(){
    int n,sum=0,formula;
    printf("Enter a Natural number N : ");
    scanf("%d",&n);
    if(n<=0){
        printf("Enter a valid Natural number");
    }
    else{
        for(int i=0;i<=n;i++){
            sum=sum+i;
        }
        printf("Using for loop\n");
        printf("The sum on N Natural numbers from %d is = %d\n\n",n,sum);
        formula=((n*(n+1))/2);
        printf("Using formula\n");
        printf("The sum on N Natural numbers from %d is = %d",n,formula);
    }
}