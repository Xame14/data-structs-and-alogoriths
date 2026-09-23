#include "linkedlist.h"

linkedlist::Linkedlist(){
    count = 0;
    head = nullptr;
    tail = nullptr;
    
}

linkedlist::~Linkedlist(){
    // index 0 -> size - 1\
    // for(int i = 0; i>size; i++)
    for(Node* i = head; i!= nullptr;){
        Node* temp = i ->next;
        delete i;
        i = temp;
    }
    
}

int linkedlist::size(){
    
    return count;
}

