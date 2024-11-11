#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100 // Define the maximum size of the stack

typedef struct {
    int arr[MAX_SIZE];
    int top;
} Stack;

// Initialize the stack
void initialize(Stack *s) {
    s->top = -1;
}

// Check if the stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Check if the stack is full
int isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

// Push an item onto the stack
void push(Stack *s, int item) {
    if (isFull(s)) {
        printf("Stack is full!\n");
        return;
    }
    s->arr[++(s->top)] = item;
}

// Pop an item from the stack
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        exit(1); // Exit with an error code
    }
    return s->arr[(s->top)--];
}

// Display all elements in the stack
void display(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements are:\n");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

int main() {
    Stack s;
    int choice, value;

    initialize(&s);

    while (1) {
        printf("\nChoose an operation:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a value to push: ");
                scanf("%d", &value);
                push(&s, value);
                printf("Pushed %d onto the stack.\n", value);
                break;

            case 2:
                if (!isEmpty(&s)) {
                    printf("Popped value: %d\n", pop(&s));
                }
                break;

            case 3:
                display(&s);
                break;

            case 4:
                printf("Exiting...\n");
                exit(0); // Exit the program
                break;

            default:
                printf("Invalid choice! Please choose again.\n");
        }
    }

    return 0;
}
