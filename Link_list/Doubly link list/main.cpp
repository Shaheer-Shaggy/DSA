#include <iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }

};


void printList(Node*head)
{
    Node* temp = head;
    while(temp!= nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

}

void reversePrint( Node *head)
{
    Node* temp = head;
    while(temp->next!= nullptr)
        temp = temp->next;

    while(temp!= nullptr)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;

}

Node * insertEnd(Node * head , int data)
{
    Node* newNode = new Node(data);

    if(head == nullptr)
    {
        head = newNode;
        return head;
    }
    else{
        Node* temp = head;
        while(temp->next!= nullptr)
            temp = temp->next;

        temp->next = newNode;
        newNode->prev = temp;
        

    }

    return head;

}

Node* insertBegin(Node* head, int data)
{

    if(head ==nullptr)
    {
        head = new Node(data);
        return head;
    }

    Node* newNode = new Node(data);
    newNode->next= head;
    head->prev = newNode;
    newNode->prev = nullptr;

    return newNode;



}

Node* insertionMiddle(Node *head, int data , int pos)
{
    Node* newNode = new Node(data);
    Node* temp = head;

    if(pos == 1){
      return insertBegin(head, data);

    }

    for(int i = 1; i < pos -1  ; i++){
        if(temp == nullptr)
            {
                cout << "Position out of range" << endl;
                return head;
            }
        temp = temp->next;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;


    newNode->next->prev = newNode;

    return head;







}

Node* deleteHead(Node* head)
{
    if(head == nullptr)
        return nullptr;

    Node* temp = head;

    head= head->next;

    if(head->next != nullptr)
      head->prev = nullptr;
      
    delete temp ;
    return head;
}

Node* deletetail(Node* head)
{
    if(head == nullptr)
       return nullptr;

    if(head->next != nullptr)
    {
        Node* temp = head;
        while(temp->next->next!= nullptr)
            temp = temp->next;

        delete temp->next;
        temp->next = nullptr;

        return head;
    }

    delete head;
    return nullptr;

}

Node* deleteMiddle(Node* head, int pos)
{
    Node*  temp = head;

    for(int i = 1 ; i< pos ; i++)
    {
        if (temp == nullptr)
        {
            cout << "Position out of range" << endl;
            return head;
        }
        temp = temp->next;
    }
    
    if(temp->prev != nullptr)
     temp->prev->next =  temp->next;

    if(temp->next != nullptr)
    temp->next->prev = temp->prev;

    if(head == temp)
        head = temp->next;

    delete temp;
   
    return head;


}

int main()
{
    Node* head = new Node(1);
    head = insertEnd(head,2);
    head = insertEnd(head,3);
    head = insertEnd(head,4);

    printList(head);
    cout << endl;

   // head = deleteHead(head);

    head = insertBegin(head,0);

    printList(head);

    int x = 10 ;
    int* y = &x ;

   // head =insertionMiddle(head,8 ,3 );

    Node* tempHead= new Node(5);

    tempHead = deleteMiddle(tempHead, 1);

    printList(tempHead);

    reversePrint(head);
    

    return 0;
}