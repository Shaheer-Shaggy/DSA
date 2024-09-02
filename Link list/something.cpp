#include <iostream>

using namespace std;

class Node
{
    public:
    int data ;
    Node* next ;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }

    void addNode(Node* node)
    {
        this->next = node ;
    }
};

void print(Node* head)
{

    while (head!=nullptr)
    {
        cout << head->data << " " ;
        head = head->next; 
    }
}

Node* addNode(Node* target , Node*  head)
{
    target->next = head ;
    return target;

}

Node* addNodeLast(Node* head , int data)
{
    Node* newNode = new Node(data);

    Node* temp = head;

    while(temp->next != nullptr)
    {
        temp=temp->next;
    }

    temp->next = newNode;

    return head;
}

Node* MiddleInsertion(Node * head , int data , int pos )
{
    if(head->next == nullptr)
    {
        return head;
    }

    Node* temp = head ;

    for(int i = 1; i <pos ; i++)
    {
        temp = temp->next ;
    }

    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;

    return head;

}

Node *removeLastNode(Node *head)
{
    if (head == nullptr)
        return nullptr;

    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }

    Node* temp = head ;

    while(head->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

    return head;

    
}

int main()
{
    Node* head = new Node(1);
    Node* second = new Node(2);
    head->addNode(second);
    Node* third = new Node(3);
    second->addNode(third);

    Node* newNode = new Node(0);
    head = addNode(newNode , head);

    print(head);

    cout << endl;

    head = addNodeLast(head , 4);

    print(head);
    cout << endl;

    head = MiddleInsertion(head , 6 ,3 );

    print(head);
    



}