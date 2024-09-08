#include <iostream>

using namespace std;

class Node
{             // link list
public:       // access modifier
    int data; // data

    Node *next; // pointer to next node

    Node(int data) // constructor
    {
        this->data = data;
        this->next = nullptr;
    }

    void addNode(Node *node)
    {
        this->next = node;
    }
};

void printList(Node *node)
{
    while (node != nullptr)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

bool Search(Node *head, int traget)
{
    while (head != nullptr)
    {
        if (head->data == traget)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}

Node *InsertionAtBegin(Node *head, Node *traget)
{
    traget->next = head;
    return traget;
}

void insertAtEnd(Node **head, int value)
{
    // Create a new node with the given value
    Node *newNode = new Node(value);

    // If the list is empty, make the new node the head
    if (*head == nullptr)
    {
        *head = newNode;
        return;
    }

    // Traverse the list until the last node is reached
    Node *current = *head;
    while (current->next != nullptr)
    {
        current = current->next;
    }

    // Link the new node to the current last node
    current->next = newNode;
}

void insertionEnd(Node *head, int data)
{
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(data);
    temp->next = newNode;
}

Node *insertionMiddle(Node *head, int data, int pos)
{
    if (head->next == nullptr)
    {
        return head;
    }

    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
        temp->next = head->next;
        head = head->next;
    }
    Node *newNode = new Node(data);

    newNode->next = head->next;
    head->next = newNode;
    temp->next = head;

    return temp;
}

Node *remoeFirstNode(Node *head)
{
    Node *temp = head;
    head = head->next;

    delete temp;
    return head;
}

Node *removeLastNode(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        delete head;
        return nullptr;
    }

    Node *current = head;
    while (current->next->next != nullptr)
    {
        current = current->next;
    }

    delete (current->next);
    current->next = nullptr;

    return head;
}

Node *removeMiddle(Node *head, int pos)
{
    if (pos < 1)
        cout << "Invalid :" << pos << endl;

    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node *temp = head;

    --pos;

    while (--pos) //  pos -1  till we reach the desired position
    {
        temp = temp->next;
    }

    Node *node2 = temp->next->next;
    delete (temp->next);

    temp->next = node2; // linking the previous node to the next node of the node to be deleted.

    return head;
}

int main()
{

    Node *head = new Node(1);
    Node *first = new Node(2);
    Node *second = new Node(3);
    Node *third = new Node(4);
    Node *fourth = new Node(5);
    Node *fifth = new Node(6);

    // creating new head

    head->addNode(first);
    first->addNode(second);
    second->addNode(third);
    third->addNode(fourth);
    fourth->addNode(fifth);

    printList(head);
    cout << endl;

    cout << endl;

    // newHead = InsertionAtBegin(head,newHead);
    head = removeMiddle(head, 4);

    //  Node* newHead = insertionMiddle(head , 6 ,2);

    cout << endl;
    printList(head);

    // cout <<"Target found: " << Search(head)
}