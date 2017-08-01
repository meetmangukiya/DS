#include <stdio.h>
#include "dll.h"

void main() {
    struct Node* start = createDLL();
    char helpString[] = "1: insertBegin, 2: deleteElement, 3: deleteBefore, 4: display";
    puts(helpString);
    while (1) {
        int choice, data;
        printf("Choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter data to be added at the beginning: ");
                scanf("%d", &data);
                insertBegin(data, &start);
                break;
            case 2:
                printf("Enter element to be deleted: ");
                scanf("%d", &data);
                deleteElement(data, &start);
                break;
            case 3:
                printf("Enter element whose previous element has to be deleted: ");
                scanf("%d", &data);
                deleteBefore(data, &start);
                break;
            case 4:
                display(start);
                break;
            default:
                puts(helpString);
                break;
        }
    }
}
