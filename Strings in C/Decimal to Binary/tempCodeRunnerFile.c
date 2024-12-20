#include<stdio.h>
#include<string.h>
int main(){
    char value[50];
    printf("Enter the Decimal value : ");
    scanf("%[^\n]%*c",value);
    int j=0,ans=0,base=1;
    for(int i=strlen(value)-1;i>=0;i--){
        j=value[i]-48;
        ans=ans+(j*base);
        base=base*2;
    }
    printf("%d",ans);
}