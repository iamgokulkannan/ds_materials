#include <stdio.h>
#include <stdlib.h>
struct root
{
    int data;
    struct root *left, *right;
} *root=NULL;

void insert(int data){
    struct root *new_root = (struct root*)malloc(sizeof(struct root));
    new_root->data=data;
    new_root->left=new_root->right=NULL;
    if(root==NULL) {
        root=new_root;
        return;
    }
    struct root *temp=root,*parent;
    while(temp){
        parent=temp;
        if(temp->data>data) temp=temp->right;
        else temp=temp->left;
    }
    if(parent->data>data) parent->right=new_root;
    else parent->left=new_root;
}

int height(struct root *root)
{
    if (root == NULL)
        return 0;
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    if (lHeight > rHeight)
        return lHeight + 1;
    else
        return rHeight + 1;
}

void printBFTCurrentLevel(struct root *root, int height)
{
    if (root == NULL)
        return;
    if (height == 1)
        printf("%d ", root->data);
    else
    {
        printBFTCurrentLevel(root->left, height - 1);
        printBFTCurrentLevel(root->right, height - 1);
    }
}
void printBFTLevelOrder(struct root *root, int level)
{
    for (int i = 1; i <= level; i++)
    {
        printBFTCurrentLevel(root, i);
    }
}

int main()
{
    insert(3);
    insert(5);
    insert(1);
    insert(2);
    insert(4);
    int h=height(root);
    printBFTLevelOrder(root,h);
}