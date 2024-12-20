#include<stdio.h>
#include<string.h>

void patternSearching(char s1[],char s2[]){
    int n1=strlen(s1), n2=strlen(s2);
    for(int i=0;i<=(n1-n2);i++){
        int a=i;
        int j;
        for(j=0;j<n2;j++){
            if(s1[a]!=s2[j]){
                break;
            }
            a++;
        }
        if(j==n2){
            printf("Pattern found at %d\n",i);
        }
    }
}

int main(){
    char s1[50],s2[50];
    printf("Enter values for s1 & s2 : ");
    scanf("%s %s",s1,s2);
    printf("\n%s %s\n",s1,s2);
    patternSearching(s1,s2);
}