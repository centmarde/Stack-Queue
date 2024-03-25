#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    stack[++top] = value;
    printf("Pushed %d onto the stack.\n", value);
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    }
    int poppedItem = stack[top--];
    printf("Popped %d from the stack.\n", poppedItem);
    return poppedItem;
}

void showStack() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack contents:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    showStack();

    int popped = pop();
    if (popped != -1) {
        printf("Top element of the stack after pop: %d\n", stack[top]);
    }

    return 0;
}
