#include <stdio.h>
#include <stdlib.h>
struct node
{
    /* data */
    int data;
    struct node *next;
};
struct node *head = NULL;
void insert(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}
void recursiveTraversalOfLinkedList(struct node *head)
{
    if (head == NULL)
    {
        printf("NULL");
        return;
    }
    printf("%d -> ", head->data);
    recursiveTraversalOfLinkedList(head->next);
}
int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        insert(i);
    }
    recursiveTraversalOfLinkedList(head);
}