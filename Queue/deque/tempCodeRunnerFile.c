#include <stdio.h>
#define MAX 5
int arr[MAX], front = -1, rear = -1;
int isEmpty()
{
    return (front == -1);
}
int isFull()
{
    return ((rear + 1) % MAX == front);
}
void insertFront(int data)
{
    if ((rear + 1) % MAX == front) // if(isFull());
    {
        printf("Queue is full\n");
        return;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        arr[front] = data;
        printf("Data %d inserted at postion %d\n", data, front);
    }
    else if (front == 0)
    {
        front = MAX - 1;
        arr[front] = data;
        printf("Data %d inserted at postion %d\n", data, front);
    }
    else
    {
        front--;
        arr[front] = data;
        printf("Data %d inserted at postion %d\n", data, front);
    }
}
void insertRear(int data)
{
    if ((rear + 1) % MAX == front) // if(isFull());
    {
        printf("Queue is FUll\n");
        return;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        arr[rear] = data;
        printf("Data %d inserted at postion %d\n", data, rear);
    }
    else
    {
        rear = (rear + 1) % MAX;
        arr[rear] = data;
        printf("Data %d inserted at postion %d\n", data, rear);
    }
}
void deleteFront()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    else if (front == rear)
    {
        printf("Data %d removed at postion %d\n", arr[front], front);
        front = rear = -1;
    }
    else
    {
        printf("Data %d removed at postion %d\n", arr[front], front);
        front = (front + 1) % MAX;
    }
}
void deleteRear()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue Underflow");
    }
    else if (front == rear)
    {
        printf("Data %d removed at postion %d\n", arr[rear], rear);
        front = rear = -1;
    }
    else if (rear == 0)
    {
        printf("Data %d removed at postion %d\n", arr[rear], rear);
        rear = MAX - 1;
    }
    else
    {
        printf("Data %d removed at postion %d\n", arr[rear], rear);
        rear--;
    }
}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue Underflow\n");
        return;
    }
    for (int i = front; i != rear; i = (i + 1) % MAX)
    {
        printf("%d\t", arr[i]);
    }
    printf("%d", arr[rear]);
}
int main()
{
    for (int i = 0; i < 3; i++)
    {
        insertFront(i);
    }
    display();
    printf("\n");
    for (int i = 3; i < 6; i++)
    {
        insertRear(i);
    }
    display();
    printf("\n");
    deleteFront();
    display();
    printf("\n");
    deleteRear();
    display();
    printf("\n");
}