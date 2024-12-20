#include <stdio.h>
int main()
{
    int arr[5], n;
    printf("Enter the array elements : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to delete : ");
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {
            for (int j = i; j < 5; j++)
            {
                arr[i] = arr[i + 1];
            }
            break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
}