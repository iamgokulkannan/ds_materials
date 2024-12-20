#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    // for loop
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // while loop
    int i=0;
    while(i<n){
        printf("%d ",arr[i]);
        i++;
    }
}