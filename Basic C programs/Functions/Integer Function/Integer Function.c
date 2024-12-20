#include<stdio.h>
int whichIsBigger(int x,int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
int main(){
    printf("Enter two nos : \n");
    int x,y;
    scanf("%d%d",&x,&y);
    printf("\n%d is Bigger comparatively",whichIsBigger(x,y));
}