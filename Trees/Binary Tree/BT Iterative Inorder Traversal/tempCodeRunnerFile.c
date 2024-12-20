#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct node
{
    int data;
    struct node *left, *right;
};

struct node *stack[MAX];
int top = 0;

void push(struct node *node)
{
    if (top == MAX - 1)
    {
        return;
    }
    stack[top++] = node;
}
struct node *pop()
{
    if (top == 0)
    {
        return NULL;
    }
    return stack[--top];
}
int isEmpty()
{
    return top == 0;
}
struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void iterativeTraversal(struct node *node)
{
    if (node == NULL)
        return;
    struct node *current = node;
    struct stack *stack = NULL;
    while (1)
    {
        if (current != NULL)
        {
            push(current);
            current = current->left;
        }
        else
        {
            if (isEmpty())
                break;
            current = pop();
            printf("%d ", current->data);
            current = current->right;
        }
    }
}

int main()
{
    struct node *root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->left = newNode(40);
    root->left->right = newNode(50);
    root->right->left = newNode(60);
    root->left->right->left = newNode(70);
    root->left->right->right = newNode(80);
    printf("Iterative traversal of binary tree is \n");
    iterativeTraversal(root);
}
