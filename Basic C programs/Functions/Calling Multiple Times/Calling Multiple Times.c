#include<stdio.h>
void fun(){
    printf("Function called !!!\n");
}
int main(){
    printf("Before calling function\n");
    fun();
    fun();
    fun();
    printf("After calling function\n");
}