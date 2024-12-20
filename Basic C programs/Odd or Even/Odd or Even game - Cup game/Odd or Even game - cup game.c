#include<stdio.h>
int main(){
    int cup,n;
    printf("Enter the number of cups : ");
    scanf("%d",&cup);
    cup = cup%2;
    if(cup==0){
    printf("Opponent wins");
    }
    else{
        printf("Player Wins");
    }
}