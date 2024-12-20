#include <stdio.h>
#include <stdlib.h>
struct node
{
    /* data */
    int data;
    struct node *next;
};
struct node *head = NULL;

void traverseLinkedList(struct node *head)
{
    struct node *ptr = head;

    while (ptr)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("null\n");
}

void insertInSortedLinkedList(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    new_node->data = data;

    if (head == NULL || (head->data >= new_node->data))
    {
        new_node->next = head;
        head = new_node;
        return;
    }
    while (temp->next != NULL && temp->next->data < new_node->data)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

int main()
{
    int n, data;
    printf("ENter n : ");
    scanf("%d", &n);
    printf("Enter values : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        insertInSortedLinkedList(data);
    }
    printf("Enter the value you want to add : ");
    scanf("%d", &data);
    insertInSortedLinkedList(data);
    traverseLinkedList(head);
}