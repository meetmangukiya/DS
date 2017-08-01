# Linked Lists

## Singly Linked Lists

### Compilation

`gcc sll.c sll.h <program using the sll.c>`

An example program is included as well, see `sll_p.c`.
Compile it using `gcc sll.c sll.h sll_p.c`

### Implemented

1. `insertBegin` - Inserts an element at the beginning of the list
2. `insertEnd` - Inserts an element at the end of the list.
3. `insertAfter` - Inserts an element after the first occurence of the a given
   element.
4. `deleteBegin` - Deletes an element from the start of the list.
5. `deleteEnd` - Deletes an element from the end of the list.
6. `traverse` - Prints the linked list.

### TODO

1. `insertBefore`
2. `deleteAfter`
3. `deleteBefore`

## Doubly Linked Lists

### Compilation

`gcc dll.c dll.h <program using the dll.c>`

An example program is included as well, see `dll_p.c`.
Compile it using `gcc dll.c dll.h dll_p.c`

### Implemented

1. `insertBegin` - Inserts an element at the beginning.
2. `deleteElement` - Deletes a given element from the list.
3. `deleteBefore` - Deletes previous element of given element from the list.
4. `display` - Prints the linked list.

### TODO

1. `insertEnd`
2. `deleteAfter`
3. `insertAfter`
4. `insertBefore`
