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
void swapList(struct node *head)
{
    struct node *temp = head;
    if (!temp || !temp->next)
        return;
    while (temp && temp->next)
    {
        int a = temp->data, b = temp->next->data;
        int c = a;
        a = b;
        b = c;
        temp->data = a;
        temp->next->data = b;
        temp = temp->next->next;
    }
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
    swapList(head);
    printf("\n");
    print(head);
}
