#ifndef _LINKLIST_H
#define _LINKLIST_H

#include<iostream>

using namespace std;

class Node
{ // link list
public:
    int data;

    Node *next;

    Node(int data)
    { // constructor
        this->data = data;
        this->next = nullptr;
    }
};

#endif
