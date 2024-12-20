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
struct node *partitionLess(int x)
{
    struct node *curr = head, *tail = head, *newHead = NULL, *newTail = NULL;
    while (curr)
    {
        struct node *next = curr->next;
        if (curr->data < x)
        {
            if (!newHead)
            {
                newHead = curr;
                newTail = curr;
            }
            else
            {
                newTail->next = curr;
                newTail = curr;
            }
        }
        else
        {
            if (!tail)
            {
                tail = curr;
            }
            else
            {
                tail->next = curr;
                tail = curr;
            }
        }
        curr = next;
    }
    if (newTail)
    {
        newTail->next = NULL;
    }
    if (tail)
    {
        tail->next = NULL;
    }
    if (newHead)
    {
        newTail->next = head;
        return newHead;
    }
    else
    {
        return head;
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
    struct node *part = partitionLess(3);
    printf("\n");
    print(part);
}
