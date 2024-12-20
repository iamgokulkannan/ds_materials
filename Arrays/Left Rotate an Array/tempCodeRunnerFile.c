#include <stdio.h>
int main()
{
    int arr[5], temp = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter values : ");
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}