#include <stdio.h>
#include "sll.h"

void main() {
    struct Node* start = createSLL();
    char helpString[] = "1: insertBegin, 2: insertEnd, 3: deleteBegin, 4: deleteEnd, 5: insertAfter, 6:display";
    puts(helpString);

    while(1) {
        int choice, data, existing;
        printf("Choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Data to add to the beginning: ");
                scanf("%d", &data);
                insertBegin(data, &start);
                break;
            case 2:
                printf("Data to add at the end: ");
                scanf("%d", &data);
                insertEnd(data, &start);
                break;
            case 3:
                deleteBegin(&start);
                break;
            case 4:
                deleteEnd(&start);
                break;
            case 5:
                printf("Enter new element, existing element: ");
                scanf("%d%d", &data, &existing);
                insertAfter(data, existing, &start);
                break;
            case 6:
                traverse(start);
                break;
            default:
                puts(helpString);
        }
    }
}
