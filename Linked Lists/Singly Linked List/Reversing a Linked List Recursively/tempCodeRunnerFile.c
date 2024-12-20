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
void reverseLinkedListRecursively(struct node *curr)
{
    if (curr->next == NULL)
    {
        head = curr;
        return;
    }
    reverseLinkedListRecursively(curr->next);
    struct node *Next = curr->next;
    Next->next = curr;
    curr->next = NULL;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        insert(i);
    }
    traverseLinkedList(head);
    reverseLinkedListRecursively(head);
    printf("\n");
    traverseLinkedList(head);
}