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
void deleteAtEnd(struct node *head)
{
    struct node *temp;
    while (head->next != NULL)
    {
        temp = head;
        head = head->next;
    }
    temp->next = head->next;
}
int main()
{
    for (int i = 0; i < 5; i++)
    {
        insert(i);
    }
    printList(head);
    printf("\n");
    deleteAtEnd(head);
    printList(head);
}