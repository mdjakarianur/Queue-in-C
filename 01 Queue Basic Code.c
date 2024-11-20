#include <stdio.h>
#define SIZE 5

int a[SIZE];
int front = -1, rear = -1;

void display() {
    if (rear == -1) {
        printf("Queue is empty\n");
        return;
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}

void insert() {
    if (rear == SIZE - 1) {
        printf("Overflow will occur\n");
        return;
    } else {
        if (front == -1) front = 0;
        rear++;
        printf("Insert the value: ");
        scanf("%d", &a[rear]);
    }
}

void delete() {
    if (front == -1 || front > rear) {
        printf("Underflow will occur\n");
        return;
    } else {
        printf("Deleted value: %d\n", a[front]);
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
}

int main() {
    int choice;
    
    do {
        printf("\nQueue Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Enter a valid choice\n");
        }
    } while (choice != 4);

    return 0;
}
