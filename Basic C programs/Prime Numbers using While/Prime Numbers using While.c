#include<stdio.h>
int main(){
    int n;
    printf("Enter a  number to find whether it is prime or not : ");
    scanf("%d",&n);
    if( n==0 || n==1 ){
        printf("%d is neither prime nor composite",n);
    }
    int i=2;
    while(i<n){
        if(n%i==0){
            printf("%d is not a prime number",n);
            return 0;
        }
        i++;
    }
    printf("%d is a prime number",n);
}