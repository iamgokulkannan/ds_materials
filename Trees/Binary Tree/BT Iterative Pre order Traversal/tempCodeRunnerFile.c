#include<stdio.h>
#include<stdlib.h>
#define MAX 100
struct node{
    int data;
    struct node*left,*right;
};
struct node *stack[MAX];
int top=0;
void push(struct node *node){
    if(top==MAX-1){
        return;
    }
    stack[top++]=node;
}
struct node *pop(){
    if(top==0) return NULL;
    return stack[--top];
}
int isEmpty(){
    return top==0;
}
struct node *new_node(int data){
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->right=new->left=NULL;
    return new;
}

void iterativePreorder(struct node *node){
    if(node==NULL) return;
    struct node *curr=node;
    struct node *stack=NULL;
    while(1){
        if(curr!=NULL){
            push(curr);
            curr=curr->left;
        }
        else{
            if(isEmpty()){
                break;
            }
            curr=pop();
            printf("%d ",curr->data);
            curr=curr->right;
        }
    }
}

int main(){
    struct node *root=new_node(1);
    root->left=new_node(2);
    root->right=new_node(3);
    root->left->left=new_node(4);
    root->right->right=new_node(5);
    iterativePreorder(root);
}