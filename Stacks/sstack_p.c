#include <stdio.h>
#include "sstack.h"

int main() {
    struct SStack stack = createStack();
    int choice;
    char helpString[] = "1: push, 2: pop, 3: exit";
    puts(helpString);
    while(1) {
        int data;
        printf("Choice: ");
        scanf("%d", &choice);
        if (choice == 3) break;
        switch(choice) {
            case 1:
                if (!isFull(stack)) {
                    printf("\nData to push: ");
                    scanf("%d", &data);
                    push(data, &stack);
                }
                else {
                    printf("\nStack overflow");
                }
                break;
            case 2:
                if (!isEmpty(stack)) {
                    printf("\nPoped data: %d", pop(&stack));
                }
                else {
                    printf("\nStack underflow");
                }
                break;
            default:
                puts(helpString);
                break;
        }
    }
}
