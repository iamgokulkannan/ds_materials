#include <stdio.h>
#include <string.h>
int main()
{
    int n, mod, div, i = 0;
    char ans[100];
    printf("Enter a binary value : ");
    scanf("%d", &n);
    while (n > 0)
    {
        div = n % 2;
        ans[i] = div + '0';
        n = n / 2;
        i++;
    }
    for (int j = strlen(ans) - 1; j >= 0; j--)
    {
        printf("%c", ans[j]);
    }
}