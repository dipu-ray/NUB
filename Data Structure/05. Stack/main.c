// Push last 4 digits of your ID and display

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
    }
    else {
        printf("Stack elements: ");
        for(int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(9);
    push(1);
    push(4);
    push(2);
    display();

    return 0;
}