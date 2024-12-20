#include<stdio.h>
int nextPrime(int);
int main(){
    int n;
    printf("Enter a number to find whether it is a prime number or not : ");
    scanf("%d",&n);
    printf("\n%d is the next prime number",nextPrime(n+1));
}
int nextPrime(int n){
    while(1) { // Infinite loop to keep searching for the next prime
        // Check if the current number n is prime
        for(i = 2; i < n; i++) {
            if(n % i == 0) { // If n is divisible by any i, it's not prime
                break; // Exit the for loop if n is not prime
            }
        }
        // After the for loop, i will be either less than n (if break was executed) or equal to n (if the loop completed)
        if(n == i) { // If we completed the for loop without breaking, n is prime
            return n; // Return the prime number
        }
        n++; // Increment n and check the next number
    }
}