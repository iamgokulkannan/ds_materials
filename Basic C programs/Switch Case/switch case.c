#include<stdio.h>
int main(){
    int x=0,y=0;
    char c;
    printf("x = %d , y = %d\n",x,y);
    printf("Enter a choice L , R , U , D : \n");
    scanf(" %c",&c);
    switch (c)
    {
    case 'l':
    case 'L':
        x--;
        printf("new x = %d , y = %d",x,y);
        break;
    case 'r':
    case 'R':
        x++;
        printf("new x = %d , y = %d",x,y);
        break;
    case 'u':
    case 'U':
        y++;
        printf("new x = %d , y = %d",x,y);
        break;
    case 'd':
    case 'D':
        y--;
        printf("new x = %d , y = %d",x,y);
        break;
    default:
        printf("Enter a valid choice");
        break;
    }
}