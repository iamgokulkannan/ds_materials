#include <stdio.h>
int main()
{
    int mat[3][4] = {{1, 1, 1, 1},
                     {2, 2, 2, 2},
                     {3, 3, 3, 3}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", mat[j][i]);
        }
        printf("\n");
    }
}