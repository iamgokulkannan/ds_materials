#include<stdio.h>
int lcm(int a, int b){
    int count;
    for(int i=a;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            count=i;
            break;
        }
    }
    return count;
}
int main(){
    int a,b;
    printf("Enter two number a , b : ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is the LCM of %d , %d",lcm(a,b),a,b);
    }
    else{
        printf("%d is the LCM of %d , %d",lcm(b,a),a,b);
    }
}