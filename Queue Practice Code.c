
#include<stdio.h>

int front = -1;
int rear = -1;
int queue[6];

int isFull(){
    if (rear == 5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(){
    if (front == -1 || front > rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Enqueue(int data){
    if (isFull())
    {
        printf("Queue Overflow!\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    queue[rear] = data;
}
void Dequeue(){
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Dequeued: %d\n", queue[front]);
    front++;
}
void Display(){
    if (isEmpty())
    {
        printf("Empty Queue\n");
        return;
    }
    printf("Current Queue:\n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d\n", queue[i]);
    }
}

int main(){
    Enqueue(5);
    Enqueue(6);
    Enqueue(7);
    Enqueue(8);

    Display();
    Dequeue();
    Dequeue();

    Enqueue(5);
    Display();

    Dequeue();
    Enqueue(9);
    Display();

    return 0;
}
