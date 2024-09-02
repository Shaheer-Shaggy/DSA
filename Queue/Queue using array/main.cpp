#include <iostream> 
#define MAX_SIZE 100
using namespace std;



class Queue
{
    public:
    int front ;
    int rear ;
    int arr[MAX_SIZE];

    Queue() : front(0) , rear(-1) {} // constructor

    bool isEmpty()
    {
        if( rear == -1)
            return true;

        return false;

    }

    bool isFull()
    {
        if(rear  == MAX_SIZE)
        {
            return true;
        }
        return false ;
    }

    void enqueue(int value)
    {
        if(isFull())
        {
            return ;
        }

        rear++;
        arr[rear]=value;

    }

    void dequeue()
    {
        for(int i =0 ; i < rear ; i ++)
        {
            arr[i]=arr[i +1];
        }
        rear-- ;
        
    }

    void display()
    {
        int i = front;
        while(i <= rear)
         {
               cout << arr[i] << " ";
               i++;
         }
        
    }


};

int main()
{
    Queue q1;
    // if (q1.isEmpty()){
    //     cout<<"Array is empty"<<endl;

    // }   
    q1.enqueue(11);
    q1.enqueue(12);
    q1.enqueue(10);
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.enqueue(20);
    q1.enqueue(27);
    q1.dequeue();
    q1.enqueue(8);
    q1.enqueue(9);
    if (q1.isFull())
    {
        cout << "Array is full" << endl;
    }
    q1.display();

}

