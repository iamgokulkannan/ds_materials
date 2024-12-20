#include <stdio.h>
#include <stdlib.h>
struct node
{
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

void insertAtLast(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node)), *temp;
    new_node->data = data;
    new_node->next = NULL;
    temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void traverseLinkedList(struct node *head)
{
    if (head == NULL)
    {
        printf("NULL");
        return;
    }
    printf("%d -> ", head->data);
    traverseLinkedList(head->next);
}

int main()
{
    int n;
    printf("ENter n : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        insert(i);
    }
    insertAtLast(5);
    traverseLinkedList(head);
}