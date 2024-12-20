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
void deleteAtPosition(int pos)
{
    struct node *current = head, *previous = head, *toDelete;
    if (head == NULL)
    {
        return;
    }
    if (pos == 1)
    {
        toDelete = head;
        head = head->next;
        free(toDelete);
    }
    else
    {
        while (pos != 1)
        {
            previous = current;
            current = current->next;
            pos--;
        }
        previous->next = current->next;
        free(current);
    }
}
int main()
{
    int n, pos;
    printf("Enter n : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        insert(i);
    }
    printList(head);
    printf("\nEnter the postion you wanna delete : ");
    scanf("%d", &pos);
    deleteAtPosition(pos);
    printf("\n");
    printList(head);
}