#include <stdio.h>
#include <stdlib.h>
struct node
{
    /* data */
    int data;
    struct node *next;
};

struct node *head = NULL;

void printList()
{
    struct node *ptr = head;
    printf("Head -> ");
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}

void insertData(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}
int main()
{
    insertData(1);
    insertData(2);
    insertData(3);
    insertData(4);
    insertData(5);
    printList();
}