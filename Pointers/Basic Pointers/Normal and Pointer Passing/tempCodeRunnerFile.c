#include<stdio.h>
int normalPassing(int x){
    x=x+5; 
}
void pointerPassing(int *ptr){
    *ptr = *ptr+5;
}
int main(){
    int x=10, ptr=10;
    normalPassing(x);
    pointerPassing(&ptr);
    printf("The normal passing of value x=10 after incrementing 5 is : %d",x);
    printf("\nThe normal passing of value *ptr=10 after incrementing 5 is : %d",ptr);
    return 0;
}