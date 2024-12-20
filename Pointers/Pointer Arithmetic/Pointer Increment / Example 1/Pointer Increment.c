#include<stdio.h>
int main(){
    int arr[]={10,20,30,40};
    int *ptr=arr;
    printf("%d %p\n",*ptr,ptr);
    ptr++;
    printf("%d %p\n",*ptr,ptr);
}