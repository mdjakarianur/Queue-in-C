#include<stdio.h>
int front = -1;
int rear = -1;
int queue[5];
int isFull(){
    if (rear == 4)
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
void enqueue(int data){
    if (isFull())
    {
        printf("Queue Overflow!\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear = rear + 1;
    queue[rear] = data;
}
void dequeue(){
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Dequeued: %d\n", queue[front]);
    front = front + 1;
}
void print(){
    if (isEmpty())
    {
        printf("Empty Queue\n");
        return;
    }
    printf("Your Current Queue:\n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d\n", queue[i]);
    }
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    print();
    dequeue();
    print();
    dequeue();
    print();
    enqueue(6);
    print();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    print();
    enqueue(6);
    enqueue(7);
    enqueue(8);
    enqueue(9);
    enqueue(10);
  
    return 0;
}
