#include "sstack.h"

struct SStack createStack() {
    struct SStack stack;
    stack.top = -1;
    return stack;
}

int isEmpty(struct SStack stack) {
    if (stack.top == -1)
        return 1;
    else
        return 0;
}

int isFull(struct SStack stack) {
    if (stack.top == SIZE - 1)
        return 1;
    else
        return 0;
}

void push(int data, struct SStack* stack) {
    if (!isFull(*stack)) {
        stack->data[++stack->top] = data;
    }
    else {
        printf("ERROR! Stack overflow!");
    }
}

int pop(struct SStack* stack) {
    if (!isEmpty(*stack)) {
        return stack->data[stack->top--];
    }
    else {
        printf("ERROR! Stack underflow");
    }
}
