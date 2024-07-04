#include "header.h"

void traverse_list(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

Node* insert_at_beginning(Node** head, int data) {
    Node* newnode = new Node();
    newnode->data = data;
    newnode->next = (*head);
    (*head) = newnode;
    return newnode;
}
