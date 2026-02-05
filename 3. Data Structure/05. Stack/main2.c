// Create a stack using an array in c and push another element and display overflow message

#include <stdio.h>
#define MAX 4

int stack[MAX];
int top = -1;

void push(int value) {
    if(top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    }
    else {
        top++;
        stack[top] = value;
        printf("Pushed %d to stack.\n", value);
    }
}

void display() {
    if(top == -1) {
        printf("Stack is empty.\n");
        return;
    }
}

int main() {
    push(9);
    push(1);
    push(4);
    push(2);
    push(5); // Overflow
    display();

    return 0;
}