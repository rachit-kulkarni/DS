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
/*
int GetNth(Node* head, int index){
    int count = 0;
    Node* current = head ;
    while ( current != NULL){
        if(count == index)
            return current -> data;
        count ++;
        current = current->next;
    }
    assert(0);
}
*/
int GetNth(Node* head, int index){
    if ( head == NULL){
        return -1;
    }
    if( index == 0){
        return head -> data ;
    }
    return GetNth((head->next), index-1);
}