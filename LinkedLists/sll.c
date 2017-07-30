#include <stdio.h>
#include <malloc.h>
#include "sll.h"

struct Node* createSLL() {
    return (struct Node*)NULL;
}

void traverse(struct Node* start) {
    if (start == NULL) {
        printf("List is empty.");
        return;
    }
    while(start->next != NULL) {
        printf("%d->", start->data);
        start = start->next;
    }
    printf("%d\n", start->data);
}

void insertBegin(int data, struct Node** head) {
    struct Node* start = *head;

    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    if (start == NULL)
        newnode->next = NULL;
    else
        newnode->next = start;
    *head = newnode;
}

void insertEnd(int data, struct Node** head) {
    struct Node* start = *head;

    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    if (start == NULL) {
        *head = newnode;
        return;
    }

    while(start->next != NULL) {
        start = start->next;
    }
    start->next = newnode;
}

void insertAfter(int data, int existing, struct Node** head) {
    struct Node* start = *head;
    if (start == NULL) {
        printf("ERROR: List is empty");
        return;
    }

    while(start->data != existing && start->next != NULL) {
        start = start->next;
    }
    if (start->data != existing) {
        printf("%d not found in list", existing);
        return;
    }

    if (start->next == NULL) {
        insertEnd(data, head);
    }
    else {
        struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->data = data;
        newnode->next = start->next;
        start->next = newnode;
    }
}

void deleteBegin(struct Node** head) {
    struct Node* start = *head;
    if (start == NULL) {
        printf("ERROR: List is empty, cannot delete.");
    }
    else if (start->next == NULL) {
        *head = NULL;
        free(start);
    }
    else {
        *head = start->next;
        free(start);
    }
}

void deleteEnd(struct Node** head) {
    struct Node* start = *head;
    if (start == NULL) {
        printf("ERROR: List is empty, cannot delete.");
    }
    else if (start->next == NULL){
        *head = NULL;
        free(start);
    }
    else {
        while(start->next->next != NULL) {
            start = start->next;
        }
        free(start->next);
        start->next = NULL;
    }
}
