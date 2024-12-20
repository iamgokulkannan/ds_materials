#include <stdio.h>
int main()
{
    int arr[5], n;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter values : ");
        scanf("%d", &arr[i]);
    }
    printf("\nEnter n : ");
    scanf("%d", &n);
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = n; i < 5; i++)
    {
        arr[i - n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[5 - n + i] = temp[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}