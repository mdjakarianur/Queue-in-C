
#include<stdio.h>

int front = -1;
int rear = -1;

int queue[100];

int full(){
    if (rear == 99)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int empty(){
    if (front == -1 || front > rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(){
    int value;
    if (full())
    {
        printf("\nQueue Overflow!\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }

    printf("\nEnter Value: ");
    scanf("%d",&value);

    rear++;
    queue[rear] = value;
}

void dequeue(){
    if (empty()) {
        printf("\nQueue is empty!\n");
        return;
    }
    printf("Dequeued: %d\n", queue[front]);
    front++;

    if (front>rear){
        front=rear=-1;
    }
}

void display(){
    if (empty())
    {
        printf("\nEmpty Queue\n");
        return;
    }
    printf("\nYour Current Queue:\n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d\n", queue[i]);
    }
}

int main()
{

    int option = 1;
    printf ("\n\nQueue Operation\n\n");
    while (option)
    {
        int choice;
        printf ("1. Enqueue\n");
        printf ("2. Dequeue\n");
        printf ("3. Display\n");
        printf ("4. Exit\n");

        printf ("\nEnter your choice: ");
        scanf   ("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
        }
        fflush (stdin);
        printf ("\nDo you want to continue(Type 1/0)? : ");
        scanf    ("%d", &option);
    }

return 0;
}
