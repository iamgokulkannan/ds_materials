#include<stdio.h>

int maximumElement(int arr[],int n){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    printf("Enter the Array Elements : ");
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d is the maximum element in the given array",maximumElement(arr,n));
}