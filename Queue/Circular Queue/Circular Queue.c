#include <stdio.h>
#define MAX 5
int arr[MAX], front = -1, rear = -1;
void enque(int data)
{
    if ((rear + 1) % MAX == front)
    {
        printf("Queue is full\n");
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
void deque()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        printf("Data %d deleted at postion %d\n", arr[front], front);
        front = rear = -1;
    }
    else
    {
        printf("Data %d deleted at postion %d\n", arr[front], front);
        front = (front + 1) % MAX;
    }
}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
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
    deque();
    enque(1);
    enque(2);
    enque(3);
    enque(4);
    enque(5);
    deque();
    deque();
    deque();
    deque();
    enque(6);
    enque(7);
    enque(8);
    enque(9);
    enque(10);
    display();
}