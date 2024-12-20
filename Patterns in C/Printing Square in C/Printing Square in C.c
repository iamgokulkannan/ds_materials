#include<stdio.h>
int main(){
    int n;
    printf("Enter a number n : ");
    scanf("%d",&n);

    // Top Layer

    for(int i=0;i<n;i++){
        printf("* ");
    }
    printf("\n");

    // Middle Layer

        for(int j=0;j<n-2;j++){
            if(n>2){
                printf("* ");
                for(int k=0;k<n-2;k++){
                    printf("  ");
                }
                printf("* ");
            }
            printf("\n");
        }

    // Bottom Layer
    for(int i=0;i<n;i++){
        printf("* ");
    }
    printf("\n");
        
    
}