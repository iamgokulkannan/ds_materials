#include <stdio.h>

void isArraySorted(int a[], int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1]) // 1 & 0 , 2 & 1
        {
            count++;
        }
    }
    if (count == n - 1)
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }
}

int main()
{
    int n;
    printf("Enter number of elements in array : ");
    scanf("%d", &n);
    printf("Enter the Array Elements : ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    isArraySorted(arr, n);
}
