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
    new_node->prev = temp;
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
void reverseList()
{
    struct node *current = head, *temp = NULL;
    if (head == NULL || head->next == NULL)
        return;
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if (temp != NULL)
    {
        head = temp->prev;
    }
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print(head);
    reverseList();
    printf("\n");
    print(head);
}