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
void deleteLastNode()
{
    struct node *toDelete, *secondPtr;
    if (head == NULL)
    {
        return;
    }
    else
    {
        toDelete = head;
        secondPtr = head;
        while (toDelete->next != NULL)
        {
            secondPtr = toDelete;
            toDelete = toDelete->next;
        }
        if (toDelete == head)
        {
            head = NULL;
            return;
        }
        else
        {
            secondPtr->next = NULL;
        }
        free(toDelete);
    }
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    traverseLinkedList(head);
    deleteLastNode();
    printf("\n");
    traverseLinkedList(head);
}