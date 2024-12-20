#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, *prev;
} *head = NULL;
void insert(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    if (!head)
    {
        new_node->prev = head;
        head = new_node;
        return;
    }
    struct node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    new_node->prev = temp;
    temp->next = new_node;
}

void insertAtk(int data, int k)
{
    if (!head || !head->next)
        return;
    struct node *curr = head, *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    for (int i = 1; i < k - 1; i++)
    {
        curr = curr->next;
    }
    new_node->next = curr->next;
    new_node->prev = curr;
    curr->next->prev = new_node;
    curr->next = new_node;
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
    printf("\n");
    insertAtk(2, 2);
    printList(head);
}