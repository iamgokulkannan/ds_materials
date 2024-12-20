#include <stdio.h>
#include <stdlib.h>
struct node
{
    /* data */
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

void insertingAtGivenPosition(int position, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node)); // new node
    struct node *temp = head;                                      // traversing
    ptr->data = data;
    if (position == 1)
    {
        ptr->next = temp;
        head = ptr;
        return;
    }
    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }
    ptr->next = temp->next;
    temp->next = ptr;
}

void printingLinkedList(struct node *head)
{
    if (head == NULL)
    {
        printf("NULL");
        return;
    }
    printf("%d -> ", head->data);
    printingLinkedList(head->next);
}
int main()
{
    printf("Enter n : ");
    int n, data, position;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        insert(data);
    }
    printf("Enter the position where you want to add the data : ");
    scanf("%d", &position);
    printf("Enter the data to be added : ");
    scanf("%d", &data);
    insertingAtGivenPosition(position, data);
    printf("HEAD -> ");
    printingLinkedList(head);
}