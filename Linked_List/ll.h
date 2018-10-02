#ifndef _LL_H_
#define _LL_H_
#include <stddef.h> // For size_t
// Create a structure that will define a node in linked list.
typedef struct nodeLL{
    void *data;
    struct nodeLL* link;
} nodeLL;
// Function to create a node for Linked List from heap
nodeLL* getNodeLL(void *data, size_t data_size);
nodeLL* newLL(void *data, size_t data_size);
nodeLL* insertNodeAtEndLL(nodeLL* root, void *data, size_t data_size);
nodeLL* insertNodeAtBegLL(nodeLL* head, void *data, size_t data_size);
nodeLL* deleteNodeAtBegLL(nodeLL* head);
void displayIntLL(nodeLL* head);
void displayFloatLL(nodeLL* head);
void displayCharLL(nodeLL* head);
#endif
