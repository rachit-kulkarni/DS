#include "header.h"
int main() 
{ 
  
    // Start with the 
    // empty list 
    Node* head = NULL; 
  
    // Use push() to construct 
    // below list 
    // 1->12->1->4->1 
    insert_at_beginning(&head, 15); 
    insert_at_beginning(&head, 10); 
    insert_at_beginning(&head, 7); 
    insert_at_beginning(&head, 5); 
    insert_at_beginning(&head, 2); 
    std::cout<<"\nBefore inserting\n";
    traverse_list(head);
    insert_sorted(&head,9);
    insert_sorted(&head,3);
    insert_sorted(&head,20);
    std::cout<<"\nAfter inserting\n";
    traverse_list(head);
    return 0; 
} 