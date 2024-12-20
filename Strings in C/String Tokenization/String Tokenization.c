#include<stdio.h>
#include<string.h>
int main(){
    char str[]="geeks-for-geeks, C course";
    const char *separator = "- ,";
    char *token=strtok(str,separator);
    while(token){
        printf("%s\n",token);
        token=strtok(NULL,separator);
    }
}