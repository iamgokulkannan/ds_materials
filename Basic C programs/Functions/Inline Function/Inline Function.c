#include<stdio.h>
inline int getMax(int x,int y){
    return(x>y)?x:y;
}
int main(){
    printf("%d",getMax(10,20));
    return 0;
}