#include <iostream>

using namespace std;

class Node 
{
    public:
    int data;
    Node * next ;
    Node * prev;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DoublyLinkedList{
    Node * head;
    Node * tail ;
    int count;

    public:

    DoublyLinkedList() { head = tail = nullptr ;}

    void addplayer(int playerNum)
    {
        Node * newNode = new Node(playerNum);
        if(head == nullptr)
        {
            head = newNode;
            tail = newNode;
            count++;
            return;
        }else 
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail= newNode;
            count++;
        }

    }

    void removePlayer(int num)
    {
        

        

    }
};