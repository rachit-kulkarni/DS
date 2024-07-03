#include "header.h"

int main() {
    Node* head = nullptr;

    // Create nodes dynamically
    insert_beginning(&head, 5);
    insert_beginning(&head, 4);
    insert_beginning(&head, 3);
    insert_beginning(&head, 2);
    insert_beginning(&head, 1);
    insert_beginning(&head, 0);

    // Find the length of the list and traverse it
    find_length(head);
    traverse_list(head);

    // Search for an element in the list
    search_list_element(head, 6);

    // Cleanup: free allocated memory
    Node* current = head;
    Node* nextNode;
    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
