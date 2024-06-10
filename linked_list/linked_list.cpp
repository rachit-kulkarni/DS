#include <iostream>

struct Node {
    int data;
    Node* next;
};


void traverseLinkedList(Node* head)
{
   
    Node* current = head;

    while (current != nullptr) {
       
        std::cout << current->data << " ";

        current = current->next;
    }

    std::cout << std::endl;
}

int main()
{
   
    Node* head = new Node{ 1 };
    Node* second = new Node{ 2 };
    Node* third = new Node{ 3 };

    head->next = second;
    second->next = third;

    
    traverseLinkedList(head);

    
    delete head;
    delete second;
    delete third;

    return 0;
}
