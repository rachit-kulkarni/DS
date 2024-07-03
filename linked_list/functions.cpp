#include "header.h"

void traverse_list(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

void search_list_element(Node* head, int target) {
    bool result = false;
    Node* current = head;
    while (current != nullptr) {
        if (current->data == target) {
            result = true;
            break; // Exit loop if element is found
        }
        current = current->next;
    }
    if (!result) {
        std::cout << "Element not found!" << std::endl;
    } else {
        std::cout << "Element found!" << std::endl;
    }
}

void find_length(Node* head) {
    int length = 0;
    Node* current = head;
    while (current != nullptr) {
        length++;
        current = current->next;
    }
    std::cout << "Length of the list is " << length << std::endl;
}

Node* insert_beginning(Node** head, int data) {
    Node* newnode = new Node();
    newnode->data = data;
    newnode->next = (*head);
    (*head) = newnode;
    return newnode;
}

Node* insert_at_end(Node** head, int data) {
    Node* newnode = new Node();
    newnode->data = data;
    newnode->next = nullptr;

    if (*head == nullptr) {
        *head = newnode;
    } else {
        Node* current = *head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newnode;
    }
    return newnode;
}
