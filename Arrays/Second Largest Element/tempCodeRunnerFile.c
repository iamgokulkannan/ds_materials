#include <stdio.h>
int getlargest(int arr[], int n)
{
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            largest = i;
        }
    }
    return largest;
}
int secondLargest(int arr[], int n)
{
    int largest = getlargest(arr, n);
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[largest])
        {
            if (res == -1)
            {
                res = i;
            }
            else if (arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}
int main()
{
    printf("ENter array");
    int arr[5], n = 5;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Second largest is : %d", secondLargest(arr, n));
}