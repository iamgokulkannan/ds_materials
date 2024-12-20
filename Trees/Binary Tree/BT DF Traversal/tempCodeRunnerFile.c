#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};

struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void printInOrder(struct node *node)
{
    if (node == NULL)
        return;
    printInOrder(node->left);
    printf("%d ", node->data);
    printInOrder(node->right);
}
void preOrder(struct node *node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}

void postOrder(struct node *node)
{
    if (node == NULL)
        return;
    postOrder(node->left);
    postOrder(node->right);
    printf("%d ", node->data);
}

int main()
{
    struct node *root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->left = newNode(40);
    root->left->right = newNode(50);
    root->left->right->right = newNode(1);
    root->left->right->right->left = newNode(2);
    root->left->right->right->left->right = newNode(3);
    root->right->left = newNode(60);
    root->right->right = newNode(70);
    printf("In Order traversal of binary tree is \n");
    printInOrder(root);
    printf("\nPre Order traversal of binary tree is \n");
    preOrder(root);
    printf("\nPost Order traversal of binary tree is \n");
    postOrder(root);
}