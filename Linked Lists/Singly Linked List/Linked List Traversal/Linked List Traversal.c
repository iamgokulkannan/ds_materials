#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

// insert node at the beginning
void insert(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

// traversing the linked list

void traversingLinkedList()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("Empty Linked List");
        return;
    }
    temp = head;
    printf("HEAD -> ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        insert(i);
    }
    traversingLinkedList();
    return 0;
}