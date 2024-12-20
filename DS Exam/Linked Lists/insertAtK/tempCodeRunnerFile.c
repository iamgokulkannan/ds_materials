#include <stdio.h>
#include <stdlib.h>
struct node
{
    /* data */
    int data;
    struct node *next;
} *head = NULL;
struct node *insert(int data)
{
    struct node *ins = (struct node *)malloc(sizeof(struct node));
    ins->data = data;
    ins->next = NULL;
    struct node *temp = head;
    if (head == NULL)
    {
        head = ins;
        return head;
    }
    while (temp->next)
        temp = temp->next;
    temp->next = ins;
    return head;
}
void print(struct node *root)
{
    if (!root)
        return;
    printf("%d ", root->data);
    if (root->next)
        printf("-> ");
    print(root->next);
}
void insertAtK(int k, int data)
{
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data=data;
    struct node *temp = head;
    for (int i = 1; i < k-1; i++)
    {
        temp = temp->next;
    }
    new->next = temp->next;
    temp->next = new;
}
int main()
{
    int n, data;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        head = insert(data);
    }
    print(head);
    insertAtK(3, 100);
    printf("\n");
    print(head);
}
