#include<stdio.h>
int main(){
    int a,b,c,d,temp;
    printf("Enter two nos a,b : ");
    scanf("%d %d",&a,&b);
    printf("Enter how many series you want :");
    scanf("%d",&c);
    printf("The Fibonacci Series of %d , %d upto %d series is :  ",a,b,c);
    printf("%d %d ",a,b);
    for(int i=0;i<c;i++){
        d=a+b;
        a=b;
        b=d;
        printf("%d ",d);
    }
}