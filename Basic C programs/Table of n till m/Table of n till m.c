#include<stdio.h>
int main(){
    int n,m;
    printf("Enter which table you want : ");
    scanf("%d",&n);
    printf("Enter how many tables you want : ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        printf("%d x %d = %d\n",i,n,i*n);
    }
}