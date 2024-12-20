#include <stdio.h>
int main()
{
    int arr[5], n;
    printf("ENter array and n : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < n)
        {
            printf("%d ", arr[i]);
        }
    }
}