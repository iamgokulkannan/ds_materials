#include<stdio.h>
#include<string.h>
int main(){
    char text[50];
    printf("Enter a string : ");
    scanf("%[^\n]%*c",text);
    for(int i=strlen(text)-1;i>=0;i--){
            printf("%c",text[i]);
    }
}