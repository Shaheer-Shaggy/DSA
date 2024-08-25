#include <iostream>

using namespace std;

class Node 
{
    public:
    int data ;
    Node* next;
    Node(int d)
    {
        data = d;
        next = nullptr;
    }
};

class Queue
{
    Node *front , *rear;
    public:
    Queue()
    {
        front = nullptr;
        rear = nullptr;
    }
    void enqueue(int value)
    {
        Node* newNode = new Node(value);

        if(this->front == nullptr) {
            front = newNode;
            rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;
    }
    void dequeue()
    {
        if(this->front == nullptr)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        if(front == nullptr)
        {
            rear = nullptr;
        }
        delete temp;
    }
    int getFront()
    {
        if(this->front == nullptr)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return this->front->data;
    }

    int getRear()
    {
        if(this->front == nullptr)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return this->rear->data;
    }
};

int main()
{

    Queue q;

    q.enqueue(1);
    q.enqueue(2);

    cout << "Front element is: " << q.getFront() << endl;
    cout << "Rear element is: " << q.getRear() << endl;

    q.dequeue();
    cout << "After dequeuing: " << endl;
    cout << "Front element is: " << q.getFront() << endl;
    cout << "Rear element is: " << q.getRear() << endl;


    
    return 0 ;
}