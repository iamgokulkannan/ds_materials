#include <stdio.h>
void djikstra(int n, int e, int arr[n][e], int s, int dist[n])
{
    int visited[n], min = 999, v;
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
        dist[i] = arr[s][i];
    }
    visited[s] = 1;
    dist[s] = 0;
    for (int i = 1; i < n; i++)
    {
        min = 999;
        for (int j = 0; j < n; j++)
        {
            if (dist[j] < min && visited[j] == 0)
            {
                min = dist[j];
                v = j;
                visited[j] = 1;
            }
        }
        for (int j = 0; j < n; j++)
            if (dist[j] > dist[v] + arr[v][j])
                dist[j] = dist[v] + arr[v][j];
    }
}
int main()
{
    int v, e, s;
    scanf("%d %d", &v, &e);
    int arr[v][e], dist[v];
    for (int i = 0; i < v; i++)
        for (int j = 0; j < e; j++)
        {
            scanf("%d ", &arr[i][j]);
            if (arr[i][j] == 0)
                arr[i][j] = 999;
        }
    scanf("%d", &s);
    for (int i = 0; i < v; i++)
        dist[i] = 0;
    djikstra(v, e, arr, s, dist);
    for (int i = 0; i < v; i++)
    {
        if (s != i)
            printf("%d->%d=%d\n", s, i, dist[i]);
    }
}