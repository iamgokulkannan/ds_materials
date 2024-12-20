#include<stdio.h>
#define INF 999
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
void floyds(int v,int e,int d[v][e]){
    for(int k=0;k<v;k++){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if (d[i][k] != INF && d[k][j] != INF && d[i][k] + d[k][j] < d[i][j]) {
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }
}

int main(){
    int v,e;
    scanf("%d %d",&v,&e);
    int arr[v][e];
    for(int i=0;i<v;i++){
        for(int j=0;j<e;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original Matrix:\n");
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            if(arr[i][j] == INF) printf("INF\t");
            else printf("%d\t", arr[i][j]);
        }
        printf("\n\n");
    }

    floyds(v,e, arr);

    printf("Shortest Path Matrix:\n");
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            if(arr[i][j] == INF) printf("INF\t");
            else printf("%d\t", arr[i][j]);
        }
        printf("\n\n");
    }
}