#include<stdio.h>
int main(){
    long long int n;
    int count=0;
    printf("Enter a number n : ");
    scanf("%lld",&n);
    long long int x = n;
    while(n>0){
        n=n/10;
        count=count+1; // count++
    }
    printf("There are a total of %d numbers in %lld",count,x);
}