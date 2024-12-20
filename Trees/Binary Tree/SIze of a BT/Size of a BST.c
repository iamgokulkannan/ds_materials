#include <stdio.h>
#include <stdlib.h>
int count = 0;
struct node
{
    int data;
    struct node *right, *left;
};
struct node *new_node(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

int size(struct node *node)
{
    if (node == NULL)
        return 0;
    count++;
    int lsize = size(node->left);
    int rsize = size(node->right);
    return count;
}
int main()
{
    struct node *root = new_node(10);
    root->left = new_node(20);
    root->right = new_node(30);
    root->left->left = new_node(40);
    root->left->right = new_node(50);
    root->left->right->right = new_node(1);
    root->left->right->right->left = new_node(2);
    root->left->right->right->left->right = new_node(3);
    root->right->left = new_node(60);
    root->right->right = new_node(70);
    printf("size -> %d", size(root));
}