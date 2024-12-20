#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head = NULL;
void insert(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node)), *temp = head;
    new_node->data = data;
    if (head == NULL)
    {
        new_node->next = new_node;
        head = new_node;
        return;
    }

    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = head;
}

void printList()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("NULL");
        return;
    }
    do
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;

    } while (ptr != head);
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    printList();
}