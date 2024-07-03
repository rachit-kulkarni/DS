#include<iostream>

struct Node{
    int data ;
    Node* next ;
    
};

void traverse_list ( Node* ) ;
void search_list_element ( Node* , int );
void find_length ( Node* );
Node* insert_beginning(Node* * , int );
//void insert_end( Node* *, int );