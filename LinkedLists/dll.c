#include <stdio.h>
#include <malloc.h>

#include "dll.h"

struct Node* createDLL() {
    return (struct Node*)NULL;
}

void insertBegin(int data, struct Node** st) {
    struct Node* start = *st;

    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->previous = NULL;

    if (start == NULL) {
        newnode->next = NULL;
    }
    else {
        newnode->next = start;
        start->previous = newnode;
    }
    *st = newnode;
}

void display(struct Node* start) {
    if (start == NULL) {
        printf("List is empty.");
        return;
    }
    while(start->next != NULL) {
        printf("%d->", start->data);
        start = start->next;
    }
    printf("%d", start->data);
}

void deleteElement(int data, struct Node** st) {
    struct Node* start = *st;

    if (start == NULL) {
        printf("ERROR! List is empty.");
        return;
    }

    if (start->data == data) {
        *st = start->next;
        free(start);
        return;
    }

    while(start->data != data && start->next != NULL) {
        start = start->next;
    }
    if (start->data != data) {
        printf("ERROR! Element not found.");
        return;
    }

    start->previous->next = start->next;

    if (start->next != NULL) {
        start->next->previous = start->previous;
    }
    free(start);
}

void deleteBefore(int existing, struct Node** st) {
    struct Node* start = *st;

    if (start == NULL) {
        printf("ERROR! List is empty.");
        return;
    }

    if (start->data == existing) {
        printf("ERROR! There cannot be an element before the first element.");
        return;
    }

    if (start->next->data == existing) {
        start->next->previous = NULL;
        *st = start->next;
        free(start);
        return;
    }

    while(start->next->data != existing && start->next->next != NULL) {
        start = start->next;
    }

    if (start->next->data != existing) {
        printf("ERROR! Data not found.");
        return;
    }

    start->previous->next = start->next;
    start->next->previous = start->previous;
    free(start);
}
