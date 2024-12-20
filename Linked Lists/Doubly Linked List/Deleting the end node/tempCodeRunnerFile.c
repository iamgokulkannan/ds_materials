#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *head = NULL;
void insert(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node)), *temp = head;
    new_node->data = data;
    new_node->next = NULL;
    if (head == NULL)
    {
        new_node->prev = NULL;
        head = new_node;
        return;
    }
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = head;
}
void print(struct node *head)
{
    if (head == NULL)
    {
        printf("NULL");
        return;
    }
    printf("%d -> ", head->data);
    print(head->next);
}
void deleteTail()
{
    struct node *toDelete, *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print(head);
    deleteTail();
    printf("\n");
    print(head);
}