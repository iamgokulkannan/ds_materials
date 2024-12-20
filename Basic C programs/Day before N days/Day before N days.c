#include<stdio.h>
int main(){
    int d,n,ans;
    printf("Enter the day \"d\" : ");
    scanf("%d",&d);
    printf("Enter the number of days before \"n\" : ");
    scanf("%d",&n);
    int x=n%7;
    ans=d-x;
    if (ans>=0){
        printf("The day before N days is = %d",ans);
    }
    else{
        ans=ans+7;
        printf("The day before N days is = %d",ans);
    }
}