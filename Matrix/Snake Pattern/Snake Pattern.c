#include <stdio.h>
int main()
{
    int arr[4][4];
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 3; j >= 0; j--)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
        else
        {
            for (int j = 0; j < 4; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }
}