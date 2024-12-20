#include<stdio.h>
int main(){
    // * * * *
    printf("1.\n");
    for (int i=0;i<4;i++){
        printf("* ");
    }
    /* 
        *
        *
        *
        *  
    */
    printf("\n\n2.\n");
    for (int i=0;i<4;i++){
        printf("* \n");
    }

    /*
        0 1 2 3
        0 1 2 3
        0 1 2 3
        0 1 2 3
    */
    printf("\n3.\n");
    for (int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    /*
        1 2 3 4
        1 2 3 4
        1 2 3 4
        1 2 3 4
    */
    printf("\n4.\n");
    for (int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}