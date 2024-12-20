#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers a , b , c : \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("A is greater");
    }
    else if(b>c){
        printf("B is greater");
    }
    else{
        printf("C is greater");
    }

}