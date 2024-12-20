#include<stdio.h>
#include<string.h>
int main(){
    char text[50], newText[50];
    printf("Enter a string : ");
    scanf("%[^\n]%*c",text);
    for(int i=strlen(text)-1,j=0;i>=0;i--,j++){
            newText[j]=text[i];
    }
    int x=strcmp(text,newText);
    if(x==0){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
}