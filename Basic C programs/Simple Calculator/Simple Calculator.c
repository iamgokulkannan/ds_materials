#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two nos a , b : \n");
    scanf("%d%d",&a,&b);
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter a choice  1 , 2 , 3 or 4 : ");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        printf("%d + %d = %d",a,b,a+b);
        break;
    case 2:
        printf("%d - %d = %d",a,b,a-b);
        break;
    case 3:
        printf("%d * %d = %d",a,b,a*b);
        break;
    case 4:
        printf("%d / %d = %d",a,b,a/b);
        break;
    
    default:
        printf("Enter a valid choice");
        break;
    }
}