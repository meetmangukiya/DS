#ifndef DLL_H
#define DLL_H

struct Node {
    int data;
    struct Node* next;
    struct Node* previous;
};

struct Node* createDLL();
void insertBegin(int data, struct Node** start);
void deleteElement(int data, struct Node** start);
void deleteBefore(int data, struct Node** start);
void display(struct Node* start);

#endif
