#include <stdio.h>
#include <stdlib.h>
struct node
{
    /* data */
    int data;
    struct node *prev, *next;
};
struct node *head = NULL;
void insert(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node)), *temp = head;
    new_node->data = data;
    new_node->next = NULL;
    if (head == NULL)
    {
        new_node->prev = head;
        head = new_node;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    new_node->prev = temp;
    temp->next = new_node;
}

void printList(struct node *head)
{
    if (head == NULL)
    {
        printf("NULL");
        return;
    }
    printf("%d -> ", head->data);
    printList(head->next);
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    printList(head);
}