#include<stdio.h>

int countOfDistinctElementsInAnArray(int arr[],int n){

    int count=0,isDistinct=1;
    for(int i=0;i<n;i++){ // iterating all elements from 1 to 5 ( 1,2,3,4,5)
        isDistinct=1;
        for(int j=i-1;j>=0;j--){ // checking the left elements like for 3 we should check 2 ,1 
            if (arr[i]==arr[j]){
                isDistinct=0;
                break;
            }
        }
        if(isDistinct==1){
                count++;
            }
        
    }
    return count;
}

int main(){
    int n;
    printf("Enter the number of elements is the Array : ");
    scanf("%d",&n);
    printf("Enter the elements in the Array : ");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The given has %d distinct elements",countOfDistinctElementsInAnArray(arr,n));
}