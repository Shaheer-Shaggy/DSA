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

Node *getNode(int data)
{
    return new Node(data);
}

void insertPos(Node **head, int pos, int data, int &listSize)
{
    if (pos < 1 || pos > listSize + 1)
    {
        cout << "Invalid position!" << endl;
    }
    else
    {
        while (pos-- > 0)
        {
            if (pos == 0)
            {
                Node *temp = getNode(data);
                temp->next = *head;
                *head = temp;
            }
            else
            {
                head = &(*head)->next;
            }
        }
        listSize++;
    }
}

void printList(Node *node)
{
    while (node != nullptr)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(1);
    int listSize = 1; // Local variable to keep track of the size of the list

    insertPos(&head, 2, 2, listSize); // Insert 2 at position 2
    insertPos(&head, 3, 3, listSize); // Insert 3 at position 3

    printList(head);                  // Output: 0 1 2 3 4
    insertPos(&head, 1, 0, listSize); // Insert 0 at position 1
    insertPos(&head, 4, 4, listSize); // Insert 4 at position 4

    printList(head); // Output: 0 1 2 3 4

    return 0;
}
