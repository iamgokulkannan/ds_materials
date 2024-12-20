#include<stdio.h>
int x=10;
void changePointer(int *ptr){
    ptr=&x;
}
int main(){
    int *ptr = NULL;
    changePointer(ptr);
    if(ptr==NULL){
        printf("NULL");
    }
    else{
        printf("%d",*ptr);
    }
}
