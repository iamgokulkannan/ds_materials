#include<stdio.h>
int gcd(int x, int y){
    int count;
    for(int i=1;i<=x;i++){
        if(x%i==0 && y%i==0){
            count = i;
        }
    }
    return count;
}
int main(){
    int a,b;
    printf("Enter two number a , b : ");
    scanf("%d %d",&a,&b);
    if(a<b){
        printf("%d is the gcd of %d , %d",gcd(a,b),a,b);
    }
    else{
        printf("%d is the gcd of %d , %d",gcd(b,a),a,b);
    }
}