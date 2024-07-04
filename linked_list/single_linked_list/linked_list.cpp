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
    insert_at_position(&head, 65, 1);
    insert_at_position(&head, 35, 2);
    std::cout<<"\nbefore deleting the list element in the beggining :\n";
    traverse_list(head);
   /* delete_at_beginning(&head);
    delete_at_beginning(&head);
    delete_at_beginning(&head);*/
    // Find the length of the list and traverse it
    delete_at_end(&head);
    delete_at_end(&head);
    delete_at_end(&head);
    //delete_at_end(&head);
    //delete_at_end(&head);
    find_length(head);
    std::cout<<"\nafter deleting the element\n";
    traverse_list(head);

    // Search for an element in the list
    search_list_element(head, 35);

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
