#include <stdio.h>
#include <string.h>
#define MAX 100
int arr[MAX];
int top = 0;
void push(char s)
{
    arr[top++] = s;
}
int pop()
{
    return arr[--top];
}
int prcd(char s)
{
    if (s == '+' || s == '-')
    {
        return 1;
    }
    if (s == '*' || s == '/')
    {
        return 2;
    }
    if (s == '^')
    {
        return 3;
    }
    return -1;
}
void infixToPostfix(char s[100])
{
    char result[MAX];
    int j = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        char c = s[i];
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9')
        {
            result[j++] = c;
        }
        else if (c == '(')
        {
            push(c);
        }
        else if (c == ')')
        {
            while (top != 0 && arr[top - 1] != '(')
            {
                result[j++] = pop();
            }
            pop();
        }
        else
        {
            while (top != 0 && prcd(arr[top - 1]) >= prcd(c))
            {
                result[j++] = pop();
            }
            push(c);
        }
    }
    while (top != 0)
    {
        result[j++] = pop();
    }
    result[j] = '\0';
    printf("%s", result);
}
int main()
{
    char s[100];
    fgets(s, 100, stdin);
    infixToPostfix(s);
}