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
void searchListIteratively(struct node *head, int data)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == data)
        {
            printf("%p", temp);
            return;
        }
        temp = temp->next;
    }
    printf("\nNot Found");
}
void searchListRecursively(struct node *head, int data)
{
    if (head == NULL)
    {
        return;
    }
    if (head->data == data)
    {
        printf("Data Found");
        return;
    }
    searchListRecursively(head->next, data);
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    traverseLinkedList(head);
    int data;
    printf("\nEnter element : ");
    scanf("%d", &data);
    searchListIteratively(head, data);
    printf("\n");
    traverseLinkedList(head);
    printf("\n");
    searchListRecursively(head, data);
}