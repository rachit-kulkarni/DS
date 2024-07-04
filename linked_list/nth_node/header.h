#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <assert.h> 
#include <bits/stdc++.h> 
// Node structure definition
struct Node {
    int data;
    Node* next;
};
void traverse_list(Node* );
Node* insert_at_beginning(Node* *, int );
int GetNth(Node* , int ) ;
#endif // HEADER_H