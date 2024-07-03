#ifndef HEADER_H
#define HEADER_H

#include <iostream>

// Node structure definition
struct Node {
    int data;
    Node* next;
};

// Function declarations
void traverse_list(Node* head);
void search_list_element(Node* head, int target);
void find_length(Node* head);
Node* insert_beginning(Node** head, int data);
Node* insert_at_end(Node** head, int data);

#endif // HEADER_H
