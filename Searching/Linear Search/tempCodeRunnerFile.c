#include <stdio.h>
int main()
{
    int arr[5], x;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter x : ");
    scanf("%d", &x);
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == x)
        {
            printf("Position is : %d", i);
        }
    }
}