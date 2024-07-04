#include "header.h"
int main() 
{ 
  
    // Start with the 
    // empty list 
    Node* head = NULL; 
  
    // Use push() to construct 
    // below list 
    // 1->12->1->4->1 
    insert_at_beginning(&head, 1); 
    insert_at_beginning(&head, 4); 
    insert_at_beginning(&head, 1); 
    insert_at_beginning(&head, 12); 
    insert_at_beginning(&head, 1); 
    traverse_list(head);
    std::cout << "Element at index 3 is " << GetNth(head, 3); 
    return 0; 
} 