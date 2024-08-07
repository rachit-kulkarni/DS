#ifndef HEADER_H
#define HEADER_H

#include <iostream>

// Node structure definition
struct Node {
    int data;
    Node* next;
};

// Function declarations
void traverse_list(Node* );
void search_list_element(Node* , int );
void find_length(Node* );
Node* insert_beginning(Node** , int );
Node* insert_at_end(Node* * , int );
Node* insert_at_position(Node* *, int , int);
Node* delete_at_beginning(Node* *);
Node* delete_at_end(Node* *);



#endif // HEADER_H
