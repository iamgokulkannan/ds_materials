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
int checkIfSorted(struct node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return 1;
    }
    int ascending = head->data <= head->next->data;
    while (head->next != NULL)
    {
        if (ascending)
        {
            if (head->data > head->next->data)
            {
                return 0;
            }
        }
        else
        {
            if (head->data < head->next->data)
            {
                return 0;
            }
        }
        head = head->next;
    }
    return 1;
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    printList(head);
    printf("\n");
    printf("%d", checkIfSorted(head));
}