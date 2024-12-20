#include <stdio.h>
int bubbleSort(int arr[5])
{
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    printf("sorted array is : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    bubbleSort(arr);
}