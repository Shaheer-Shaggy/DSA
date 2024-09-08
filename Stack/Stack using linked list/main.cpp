#include <iostream>
#include "../../Link_list/singly_linked_list/link_list.h"

using namespace std;

class Stack
{
    Node* head;

    public:

    Stack()
    {
        this->head = nullptr;
    }

    bool isEmpty()
    {
        return (head == nullptr) ;
    }

    void push(int data)
    {
        Node * newNode  = new Node(data);
        if(!newNode)
        {
            cerr << "Stack Overflow " ; 
        }
        newNode->next = head ;
        head = newNode ;
    }

    void pop()
    {
        if(this->isEmpty())
        {
            cerr << " Stack Underflow" ;
        }
        else 
        {
            Node* temp = head ;
            head = head->next ;
            delete temp ;
        }
    }

    int peek()
    {
        if(!isEmpty())
        {
            return head->data;
        }
        else
        {
            cerr << " Stack is Empty :) " ;
        }
          
    }

    void display()
    {
        Node* temp = head;

        while(temp->next != nullptr)
        {
            cout << temp->data << " ";
            temp= temp->next ;
        }
    }


};



int main()
{

    Stack  s1;
    s1.push(9);
    s1.push(8);
    s1.push(7);
    s1.push(6);
    s1.push(5);
    s1.push(4);
    s1.push(3);

    s1.display();

    cout << endl;

    s1.pop();
    s1.pop();
    s1.pop();

    s1.display();


}