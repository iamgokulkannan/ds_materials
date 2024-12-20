#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};

struct node *new_node(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

int height(struct node *node)
{
    if (node == NULL)
        return 0;
    int lHeight = height(node->left);
    int rHeight = height(node->right);
    if (lHeight > rHeight)
        return lHeight + 1;
    else
        return rHeight + 1;
}

void printBFTCurrentLevel(struct node *node, int height)
{
    if (node == NULL)
        return;
    if (height == 1)
        printf("%d ", node->data);
    else
    {
        printBFTCurrentLevel(node->left, height - 1);
        printBFTCurrentLevel(node->right, height - 1);
    }
}
void printBFTLevelOrder(struct node *node, int level)
{
    for (int i = 1; i <= level; i++)
    {
        printBFTCurrentLevel(node, i);
    }
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
    int level = height(root);
    printBFTLevelOrder(root, level);
}