#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int e;
    struct Node* next;
};
typedef struct Node* List;
typedef struct Node* Position;

// Function to insert an element
void Insert(int x, List l, Position p) {
    Position newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->e = x;
    newNode->next = p->next;
    p->next = newNode;
}

// Check if position is last in the circular list
int isLast(Position p, List l) {
    return (p->next == l);
}

// Find the node before the one containing x
Position FindPrevious(int x, List l) {
    Position p = l;
    while (p->next != l && p->next->e != x)
        p = p->next;
    return p;
}

// Find the node containing x
Position Find(int x, List l) {
    Position p = l->next;
    while (p != l && p->e != x)
        p = p->next;
    return p;
}

// Delete an element
void Delete(int x, List l) {
    Position p = FindPrevious(x, l);
    if (!isLast(p, l)) {
        Position temp = p->next;
        p->next = temp->next;
        free(temp);
    } else {
        printf("Element does not exist\n");
    }
}

// Display the list
void Display(List l) {
    Position p = l->next;
    if (p == l) {
        printf("List is empty\n");
        return;
    }
    printf("HEAD -> ");
    while (p != l) {
        printf("[ %d ] -> ", p->e);
        p = p->next;
    }
    printf("HEAD (circular)\n");
}

// Main function
int main() {
    List l = (struct Node*)malloc(sizeof(struct Node));
    if (l == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }
    l->next = l; // Initialize the circular list
    int choice, x, pos, i;
    Position p;

    printf("CIRCULAR LINKED LIST IMPLEMENTATION\n");
    do {
        printf("\n1. INSERT\t2. DELETE\t3. FIND\t4. PRINT\t5. QUIT\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element: ");
                scanf("%d", &x);
                printf("Enter position (starting from 1): ");
                scanf("%d", &pos);
                p = l;
                for (i = 1; i < pos && p->next != l; i++)
                    p = p->next;
                Insert(x, l, p);
                break;
            case 2:
                printf("Enter the element to delete: ");
                scanf("%d", &x);
                Delete(x, l);
                break;
            case 3:
                printf("Enter the element to search: ");
                scanf("%d", &x);
                p = Find(x, l);
                if (p == l)
                    printf("Element does not exist\n");
                else
                    printf("Element exists\n");
                break;
            case 4:
                Display(l);
                break;
        }
    } while (choice < 5);

    return 0;
}
