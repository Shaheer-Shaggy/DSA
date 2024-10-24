#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    int priority;
    Node *next;
    Node *prev;

    Node(int data, int priority) : data(data), priority(priority), next(nullptr), prev(nullptr) {}
    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};

void ReverseDll(Node* &head)
{
    if (head  == nullptr || head->next== nullptr)
       return;

    Node * track = head;

    while(track->next!= nullptr)
    {
        track = track->next;
    }
    head = track ;

    while(track !=nullptr)
    {
        Node* oldprev = track->prev;
        track->prev = track->next;
        track->next = oldprev;

        track= track->next;
    }

    head->prev= nullptr;
}

int main()
{
    // Creating nodes with values from 1 to 6
    Node *head = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);
    Node *node5 = new Node(5);
    Node *node6 = new Node(6);

    // Linking the nodes to form the doubly linked list
    head->next = node2;
    node2->prev = head;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;
    node4->next = node5;
    node5->prev = node4;
    node5->next = node6;
    node6->prev = node5;

    // Print the original list
    cout << "Original List: ";
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Reverse the doubly linked list
    ReverseDll(head);

    // Print the reversed list
    cout << "Reversed List: ";
    temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
