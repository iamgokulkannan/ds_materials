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
void traverseList(struct node *head)
{
    if (head == NULL)
    {
        printf("NULL");
        return;
    }
    printf("%d -> ", head->data);
    traverseList(head->next);
}
void reverseListIteratively()
{
    struct node *prev = NULL, *current = head, *Next = NULL;
    if (current == NULL)
    {
        return;
    }
    while (current != NULL)
    {
        Next = current->next; // Before changing next of current, store next node
        current->next = prev; // Reverse the link
        prev = current;       // Move prev to current node
        current = Next;       // Move current to next node
    }
    head = prev; // Update head to the new first node
}
int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        insert(i);
    }
    traverseList(head);
    reverseListIteratively();
    printf("\n");
    traverseList(head);
}