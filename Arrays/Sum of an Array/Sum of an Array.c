#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    printf("Enter the Array Elements : ");
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        count=count+arr[i];
    }
    printf("The sum of the Entered array is %d",count);
}