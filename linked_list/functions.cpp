#include "header.h"

void traverse_list(Node* head){
    Node* current = head ;
    while ( current != nullptr){
        std::cout << current -> data << " " ;
        current = current -> next ;
    }
    std::cout << std::endl ;
}

void search_list_element ( Node* head , int target ){
    bool result = false;
    Node* current = head ;
    while( current != nullptr){
        if(current -> data == target){
           result = true ;
        }
        current = current -> next ; 
    }
    if ( result == false){
        std::cout << "Element not found!" ;
    }
    else {
        std::cout << "Element found!" ;
    }
    
}

void find_length( Node* head){
    int length = 0;
    Node* current = head ;
    while( current != nullptr){
        length++;
        current = current -> next ;
    }
    std::cout<<"\nlength of the list is " << length <<"\n";

}

Node* insert_beginning( Node** head , int data ){
    Node* newnode = new Node();
    newnode -> data = data;
    newnode -> next = (*head) ;
    (*head) = newnode ; 
}

