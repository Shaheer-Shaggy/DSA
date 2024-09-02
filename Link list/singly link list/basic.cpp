#include <iostream>

using namespace std;

class Node { // link list 
    public:

    int data ;

    Node* next;

    Node(int data) {    // constructor
        this->data = data;
        this->next = nullptr;
    }

    void addNext(Node* node) {  // add new address to new node 
        this->next = node;
    }

};

void PrintList(Node* head)  // print linked list
{
    while (head!=nullptr)
    {
        cout << head->data <<" ";
        head = head->next;  // move to the next node  // this is the core of the linked list traversal.
    }
    
}

bool SearchNode_bool(Node* head, int traget)
{
    while(head!=nullptr){
        if(head->data == traget){
            return true;
        }
        head = head->next;
    }
    return false;
}

Node* SearchNode(Node *head , int target)
{
    while(head!= nullptr){
        if(head->data == target){
            return head;
        }
        head = head->next;
    }
    return nullptr; // if not found return null pointer.

}

Node* InsertionAtBegin(Node* head, Node* target) 
{
    target->next = head; // new node's next address points to the old head
    return target; // return the new head

}

void InsertionAtEnd(Node** head, int target) 
{
    Node* newNOde = new Node(target) ; 

    if(head == nullptr) *head= newNOde; // if list is empty, return new node
    else {
    while(*head!=nullptr){
        if((*head)->next == nullptr)
        {
            (*head)->next = newNOde; // if last node, point new node to null
            break;
        }
        *head = (*head) ->next; // move to the next node
     }
    }
}

Node* removeFirstNode(Node* head)
{
    if(head ==nullptr )
       return nullptr;

    Node* temp = head;
    head = head->next;
    delete temp;

    return head;
}

Node* removeLastNode(Node* head)
{
    if(head == nullptr)
        return nullptr;

    if(head->next == nullptr)
    {
        delete head;
        return nullptr;
    }

    Node* current = head;
    while(current->next->next!= nullptr)
    {
        current = current->next;
    }
    delete current->next;
    current->next = nullptr;

    return head;
}

int main()
{

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->addNext(second);
    second->addNext(third);

    PrintList(head); // prints 1 2 3

   // cout << endl;

   // cout<< SearchNode_bool(head, 2); // returns true

   // Node* foundNode = SearchNode(head, 2); // returns address of node with data 2
   // cout << "Found node: " << foundNode << endl; // prints Found node: 2

    

  //  PrintList(head); // prints 1 2 3 4

    // head = removeFirstNode(head); // removing first node 
    // cout << endl;

    // PrintList(head); // prints 2 3 4
    // cout << endl;

    // head = removeLastNode(head); // removing last node

    // PrintList(head); // prints


    return 0;
}