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
    new_node->next = head;
    temp->next = new_node;
    head = new_node;
}

void insertAtEnd(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    if (head == NULL)
    {
        new_node->next = new_node;
        head = new_node;
        return;
    }
    struct node *temp = head;
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
void swap()
{ // 2nd and 2nd last
    if (head == NULL || head->next == head || head->next->next == head)
    {
        return;
    }
    struct node *second = head->next, *prev = head, *secondLast = head, *prevSecondLast = NULL;
    while (secondLast->next->next != head)
    {
        prevSecondLast = secondLast;
        secondLast = secondLast->next;
    }
    if (second == secondLast)
    {
        return;
    }
    prev->next = secondLast;
    prevSecondLast->next = second;
    struct node *temp = second->next;
    second->next = secondLast->next;
    secondLast->next = temp;
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insertAtEnd(0);
    insertAtEnd(-1);
    insertAtEnd(-2);
    printList();
    swap();
    printf("\n");
    printList();
}