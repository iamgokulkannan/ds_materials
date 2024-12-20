#include <stdio.h>
void allDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int n;
    printf("Enter a number n : ");
    scanf("%d", &n);
    allDivisors(n);
}

/*

int main(){
    int n;
    printf("Enter a number n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
}

*/