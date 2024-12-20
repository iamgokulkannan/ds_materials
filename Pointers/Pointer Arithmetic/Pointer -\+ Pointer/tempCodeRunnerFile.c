#include<stdio.h>
int main(){
    int arr[]={10,20,30,40};
    int *ptr1 = arr;
    printf("%d %p\n",*ptr1,ptr1);
    int *ptr2 = ptr1+3;
    printf("%d %p\n",*ptr1,ptr1);
    printf("%zu",ptr2-ptr1);
}