#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

// display the linked list
void printList()
{
    struct node *ptr = head;
    printf("\n head -> ");
    // starting from the beginning
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf(" null\n");
}
// insert node at the beginning
void insert(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
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
    printList();
    return 0;
}