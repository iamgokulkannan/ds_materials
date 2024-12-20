#include <stdio.h>

void oneToNNumbers(int n) {
    if (n > 1) {
        oneToNNumbers(n - 1);
    }
    printf("%d ", n);
}

int main() {
    int n;
    printf("Enter a number n: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("Enter a number greater than 1");
    } else {
        oneToNNumbers(n);
    }
    return 0;
}