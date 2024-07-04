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

Node* insert_sorted(Node* *head, int data){
    Node* newnode = new Node();
    newnode -> data = data;
    newnode -> next = NULL;
    Node* current = *head ;
    if(*head == NULL || (*head)->data > data){
        newnode -> next = (*head);
        (*head) = newnode;
    }
    else{
        current = *head ; 
        while(current->next != NULL && current->next->data < data){
            current = current->next;
        }
        newnode->next=current->next;
        current->next = newnode;
    }
    return newnode;
}