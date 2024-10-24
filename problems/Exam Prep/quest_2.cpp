#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void Convert(int arr[],int size , Node* &head)
{
    Node* temp = nullptr;
    Node* current = nullptr;

    for(int i =0 ; i <size ; i++)
    {
        temp = new Node(arr[i]);

        if(head == nullptr)
        {
            head = temp;
            current= head;
        }
        else 
        {
            current->next = temp;
            current = current-> next;

        }
        

    }
}

void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << "-> ";
        head = head->next;
    }
}

int main()
{

    int arr[5] = {1,2,3,4,5};
    int size = 5;
    Node* head = nullptr;
    Convert(arr , size , head);

    print(head);


}