#ifndef SSTACK_H
#define SSTACK_H

#define SIZE 10

struct SStack {
    int data[SIZE];
    int top;
};

struct SStack createStack();
void push(int data, struct SStack* stack);
int pop(struct SStack* stack);
int peek(struct SStack stack);
int isEmpty(struct SStack stack);
int isFull(struct SStack stack);

#endif
