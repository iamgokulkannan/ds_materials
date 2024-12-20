#include <stdio.h>
#include <string.h>
#include <math.h>
int arr[100], top = 0;
void push(char c)
{
    arr[top++] = c;
}
int pop()
{
    return arr[--top];
}
void strrev(char s[100])
{
    int i = 0, j = strlen(s) - 1;
    while (i < j)
    {
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
        i++;
        j--;
    }
}
void evaluatePrefix(char s[100])
{
    int a, b, c;
    char x;
    strrev(s);
    for (int i = 0; i < strlen(s); i++)
    {
        x = s[i];
        if (x >= '0' && x <= '9')
        {
            push(x - '0');
        }
        else if (x != '\n')
        {
            b = pop();
            a = pop();
            switch (x)
            {
            case '+':
                c = b + a;
                break;
            case '-':
                c = b - a;
                break;
            case '*':
                c = b * a;
                break;
            case '/':
                c = b / a;
                break;
            case '^':
                c = pow(b, a);
                break;
            }
            push(c);
        }
    }
    printf("%d", pop());
}
int main()
{
    char exp[100];
    fgets(exp, 100, stdin);
    exp[strlen(exp) - 1] = '\0';
    evaluatePrefix(exp);
}