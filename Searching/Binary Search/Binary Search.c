#include <stdio.h>
int binarySearch(int arr[], int x, int n, int low)
{
    int mid = low + n / 2;
    if (arr[mid] == x)
    {
        return mid;
    }
    else if (arr[mid] > x)
    {
        return binarySearch(arr, x, n - 1, low);
    }
    else
    {
        return binarySearch(arr, x, n, low + 1);
    }
    return -1;
}
int main()
{
    int x, n;
    printf("ENter n : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter x : ");
    scanf("%d", &x);
    printf("\n");
    printf("Position : %d", binarySearch(arr, x, n, 0));
}