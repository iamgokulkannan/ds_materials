#include<stdio.h>
#include<stdlib.h>
int bool=0;
struct node{
    int data;
    struct node *right,*left;
};
struct node *new_node(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

int search(int k,struct node *node)
{
    if (node == NULL)
        return 0;
    if(k==node->data){
        bool=1;
    }
    int lsearch = search(k,node->left);
    int rsearch = search(k,node->right);
    return bool;
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
    if(search(100,root)) printf("Found");
    else printf("Not Found");
}