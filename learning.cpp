#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

Node *deleteAllOccurrences(Node *head, int key)
{
    if(head == nullptr)
    {
        return nullptr;
    }

    while(head!=nullptr &&head->data == key)
    {
        Node* temp = head;
        head=head->next;
        if(head)
         head->prev = nullptr;
        delete temp ;
    }

    Node* temp = head;
    bool del = false;

    while (temp != nullptr)
    {
        if (temp->data == key)
        {
            Node *track = temp;
            if (temp->prev)
                temp->prev->next = temp->next;
            if (temp->next)
                temp->next->prev = temp->prev;

            temp = temp->next; // Move to next node before deleting
            delete track;
        }
        else
        {
            temp = temp->next; // Move to the next node if no deletion happened
        }
    }
    return head;
}

void splitCircularList(Node *head, Node *&head1, Node *&head2)
{
    if(head == nullptr || head ->next == head) 
    {
        head1 = head;
        head2 = nullptr;
        return;
    }

    Node *slow = head;
    Node *fast = head;

    while(fast->next !=head && fast->next->next!= head)
    {
        slow = slow->next;
        fast= fast->next->next;
    }

    head1 = head ;
    head2 = slow->next;

    slow->next = head1;

    Node* temp = head2;
    while(temp->next !=head){
        temp = temp->next;
    }
    temp -> next = head2;


}
void printList(Node *head)
{
    if (head == nullptr)
        return;

    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main()
{
    // Creating a circular doubly linked list for testing
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(2); // Node to test deletion

    // Connecting nodes to form a circular doubly linked list
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = fifth;
    fifth->prev = fourth;
    fifth->next = head; // Completes the circular connection
    head->prev = fifth;

    cout << "Original list: ";
    printList(head);

    // Deleting all occurrences of 2
    head = deleteAllOccurrences(head, 2);
    cout << "List after deleting all occurrences of 2: ";
    printList(head);

    // Splitting the circular list
    Node *head1 = nullptr;
    Node *head2 = nullptr;
    splitCircularList(head, head1, head2);

    cout << "First half after split: ";
    printList(head1);
    cout << "Second half after split: ";
    printList(head2);

    return 0;
}
