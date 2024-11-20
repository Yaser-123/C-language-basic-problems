#include <stdio.h>
#include <string.h>

#define MAX 30
#define ASCII_SIZE 128

/* Global arrays to store precedence */
int F[ASCII_SIZE]; // Stack precedence
int G[ASCII_SIZE]; // Incoming precedence

/* Function to initialize precedence values */
void init_precedence() {
    // Initialize all ASCII values to avoid undefined behavior
    for (int i = 0; i < ASCII_SIZE; i++) {
        F[i] = G[i] = 8; // Default high precedence for operands
    }

    /* Set stack precedence for operators */
    F['+'] = F['-'] = 2;
    F['*'] = F['/'] = 4;
    F['^'] = F['$'] = 5;
    F['('] = 0;
    F['#'] = -1; // '#' is used as the base of the stack

    /* Set incoming precedence for operators */
    G['+'] = G['-'] = 1;
    G['*'] = G['/'] = 3;
    G['^'] = G['$'] = 6;
    G['('] = 9;
    G[')'] = 0;
}

/* Function to convert infix expression to postfix */
void infix_postfix(char infix[], char postfix[]) {
    int top; /* Points to top of the stack */
    int j = 0; /* Index for postfix expression */
    int i; /* Index to access infix expression */
    char s[MAX]; /* Stack for operators */
    char symbol; /* Holds scanned character from infix expression */

    top = -1; /* Stack is initially empty */
    s[++top] = '#'; /* Initialize stack to # */

    for (i = 0; i < strlen(infix); i++) {
        symbol = infix[i]; /* Scan the next symbol */

        /* Pop and add to postfix while stack precedence is greater */
        while (F[s[top]] > G[symbol])
            postfix[j++] = s[top--]; 

        if (F[s[top]] != G[symbol]) {
            s[++top] = symbol; /* Push the input symbol */
        } else {
            top--; /* Discard '(' from stack */
        }
    }

    /* Pop all remaining elements in the stack */
    while (s[top] != '#')
        postfix[j++] = s[top--]; 

    postfix[j] = '\0'; /* NULL terminate the postfix expression */
}

int main() {
    char infix[MAX], postfix[MAX];
    
    printf("Enter infix expression: ");
    scanf("%s", infix);

    /* Initialize operator precedence */
    init_precedence();

    /* Convert infix to postfix */
    infix_postfix(infix, postfix);

    /* Print the postfix expression */
    printf("Postfix expression: %s\n", postfix);

    return 0;
}
