#include "header.h"

int main() {
    Node* head = nullptr;

    // Create nodes dynamically and insert at the beginning
 /* insert_beginning(&head, 2);
    insert_beginning(&head, 1);
    insert_beginning(&head, 0);*/

    // Insert nodes at the end
    //insert_at_end(&head, 3);
    //insert_at_end(&head, 4);
   // insert_at_end(&head, 5);

    // Insert at a specific position
    insert_at_position(&head, 9, 0);
    insert_at_position(&head, 45, 0);

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
