#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node
{
    char title[100];
    int bookID, copies;
    struct node *next;
} *head = NULL;

void insert(char title[100], int bookID, int copies)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    strcpy(new_node->title, title);
    new_node->bookID = bookID;
    new_node->copies = copies;
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    struct node *temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = new_node;
}
void delete(int data)
{
    struct node *temp = head, *prev = NULL;
    if (temp != NULL && temp->bookID == data)
    { // Special case to delete head node
        head = temp->next;
        free(temp);
        return;
    }
    while (temp->bookID != data)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
}
void sort()
{
    struct node *temp1, *temp2;
    int tempBookID, tempCopies;
    char tempTitle[100];
    if (head == NULL)
        return;
    for (temp1 = head; temp1->next != NULL; temp1 = temp1->next)
    {
        for (temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next)
        {
            if (temp1->bookID > temp2->bookID)
            {

                tempBookID = temp1->bookID;
                temp1->bookID = temp2->bookID;
                temp2->bookID = tempBookID;

                tempCopies = temp1->copies;
                temp1->copies = temp2->copies;
                temp2->copies = tempCopies;

                strcpy(tempTitle, temp1->title);
                strcpy(temp1->title, temp2->title);
                strcpy(temp2->title, tempTitle);
            }
        }
    }
}
void display(struct node *head)
{
    if (head == NULL)
    {
        return;
    }
    printf("%s\t%d\t%d\n", head->title, head->bookID, head->copies);
    display(head->next);
}
int main()
{
    insert("gopal", 200, 5);
    insert("gop", 2300, 55);
    insert("goal", 1200, 54);
    insert("go", 24300, 35);
    insert("g", 9200, 51);
    display(head);
    delete (200);
    printf("\n");
    display(head);
    sort();
    printf("\n");
    display(head);
}