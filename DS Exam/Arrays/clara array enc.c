#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
    for (int i = 0; i < n; i++)
        printf("%c ", s[i] + 'A' - 1);
}