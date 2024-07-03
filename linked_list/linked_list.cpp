#include "header.h"

int main(){
    Node* head = new Node{ 3 } ;
    Node* second = new Node{ 4 } ;
    Node* third = new Node{ 5 } ;

    head -> next = second ;
    second -> next = third ;
    third -> next = nullptr ;
   
   Node* fourth = insert_beginning ( &head , 2) ;
   Node* fifth = insert_beginning ( &head , 1) ;
   Node* sixth = insert_beginning ( &head , 0) ;

    find_length ( head );
    traverse_list ( head ) ;
    search_list_element ( head , 6);
    delete head ; 
    delete second ;
    delete third ;
    delete fourth ;
    delete fifth ;
    delete sixth ;

    return 0;

}