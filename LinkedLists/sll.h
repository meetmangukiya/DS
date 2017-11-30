#ifndef SLL_H
#define SLL_H

struct Node {
    int data;
    struct Node* next;
};

struct Node* createSLL();
void insertBegin(int data, struct Node** start);
void insertEnd(int data, struct Node** start);
int deleteBegin(struct Node** start);
int deleteEnd(struct Node** start);
void traverse(struct Node* start);
void insertAfter(int new, int existing, struct Node** start);

#endif
