#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};


void DelThird(Node* &head)
{
    Node* temp = head;
    Node* track = nullptr;
    
    while(temp != temp->next)
    {
        Node *del = nullptr;
        track = temp->next->next;
        del = track->next;
        track->next = track->next->next->next;
        temp= temp->next;
        delete del ;

    }
}

int main()
{
    Node* head = new Node(1);
    Node* node1 = new Node(2);
    head->next =node1;
    Node* node2 = new Node(3);
    node1->next = node2;
    Node* node3 = new Node(4);
    node2->next = node3;
    Node* node4 = new Node(5);
    node3->next = node4;
    Node* node5 = new Node(6);
    node4->next = node5;
    Node* node6 = new Node(7);
    node5->next = node6;

    node6->next = head;

    DelThird(head);
}