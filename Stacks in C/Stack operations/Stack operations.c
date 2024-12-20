#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    unsigned capacity;
    int *array;
};

struct stack *createStack(unsigned capacity)
{
    struct stack *new_stack = (struct stack *)malloc(sizeof(struct stack));
    new_stack->top = -1;
    new_stack->capacity = capacity;
    new_stack->array = (int *)malloc(new_stack->capacity * sizeof(int));
    return new_stack;
}

int isFull(struct stack *stack)
{
    return stack->top == stack->capacity - 1;
}

int isEmpty(struct stack *stack)
{
    return stack->top == -1;
}

void push(struct stack *stack, int item)
{
    if (isFull(stack))
    {
        printf("Stack Full !!! \n");
        return;
    }
    stack->array[++stack->top] = item;
    printf("%d pushed into stack\n", item);
}

int pop(struct stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack Empty !!! \n");
        return INT_MIN;
    }
    return stack->array[stack->top--];
}

int peek(struct stack *stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}
int main()
{
    struct stack *stack = createStack(1000);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    printf("%d\n", peek(stack));
    pop(stack);
    printf("%d\n", peek(stack));
    push(stack, 40);
    printf("%d\n", peek(stack));
    return 0;
}