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
void rotate(int k){
    for(int i=0;i<k;i++){
        struct node *temp=head,*new;
        while(temp->next->next) temp=temp->next;
        new->data=temp->data;
        temp->next=NULL;
        new->next=head;
        head=new;
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
    scanf("%d",&n);
    print(head);
    rotate(n);
    printf("\n");
    print(head);
}
