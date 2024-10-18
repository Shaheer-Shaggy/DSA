#include <iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this->data = d;
        this->next = nullptr;
    }

};

Node *insertAtBeginning(Node *last, int value)
{
 
    Node *newNode = new Node(value);

    
    if (last == nullptr)
    {
        newNode->next = newNode;
        return newNode;
    }

    
    newNode->next = last->next;
    last->next = newNode;

    return last;
}

void printList(Node *last)
{
    if (last == NULL)
        return;

     Node *temp = last ;
     do {
        cout << temp->data << " -> ";
        temp = temp->next;
     } while (temp!= last);
}

int main()
{
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);

    first->next = second;
    second->next = third;
    third->next = first;

    cout << "Original List: ";
    printList(third);
    cout << endl;

  //  insertAtBeginning(third, 0);

  //  printList(third);


}