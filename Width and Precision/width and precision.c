#include<stdio.h>
int main(){
    int x=124;
    char y[]="gfg";
    float z=1.345;
    /*
    //width for character and string
    */
    printf("%-5d %-5s %f\n",x,y,z);
    printf("%d\n",x);
    printf("%05d\n",x);
    printf("%5d\n",x);
    printf("%+5d\n",x);
    printf("%*d\n",6,x);
    /*
    //width and precision for character
    */
    char a[]="geeksforgeeks";
    printf("%.3s\n",a);
    printf("%5.3s\n",a);
    printf("%-5.3s\n",a);
    printf("%*.*s\n",5,5,a);
    /*
    //width and precision for float
    */
    double b =1.345;
    printf("%.2f\n",b);
    printf("%5.2f\n",b);
    printf("%-5.2f\n",b);
    printf("%*.*f",5,2,b);
    printf("%0*.*f",5,2,b);
}