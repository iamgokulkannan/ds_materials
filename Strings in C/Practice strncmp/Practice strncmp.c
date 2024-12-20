#include<stdio.h>
#include<string.h>
int main(){
    char s1[50], s2[50];
    printf("Enter 2 strings : ");
    fgets(s1,50,stdin);
    fgets(s2,50,stdin);
    if(strncmp(s1,s2,strlen(s2)-1)==0){
        printf("same");
    }
    else{
        printf("not same");
    }
}