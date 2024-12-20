#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for loop
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*2;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // while loop
    int i=0;
    while(i<n){
        arr[i]=arr[i]*2;
        i++;
    }
    i=0;
    while(i<n){
        printf("%d ",arr[i]);
        i++;
    }
}