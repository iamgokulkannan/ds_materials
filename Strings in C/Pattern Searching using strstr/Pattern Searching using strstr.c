#include<stdio.h>
#include<string.h>
int main(){
    char s1[50], s2[50];
    printf("Enter string a : ");
    scanf("%[^\n]%*c", s1);
    printf("\nEnter string b : ");
    scanf("%[^\n]%*c", s2);
    char *p=strstr(s1,s2);
    if(p==NULL){
        printf("Not Found");
        return 0;
    }
    while(p){
        printf("\noccurrence is %ld",p-s1);
        p=strstr(p+1,s2);
    }
}