#include<iostream>
#include "../Stack/temp_stack.h"

using namespace std;

class Queue 
{ 
    public:

    Stack<int> s1 , s2 ;

    void enqueue(int x)

    {
        while (!s1.isEmpty())
        {
            s2.push(s1.pop());
        }

        s1.push(x);

        while(!s2.isEmpty())
        {
            s1.push(s2.pop());

        }
        
    }

    int dequeue()
    {
        if(s1.isEmpty())
        {
            return -1;
        }

        int x = s1.pop();
        return x ;
    }


    void display()
    {
        Stack<int> temp = s1;
        while(!temp.isEmpty())
        {
            cout << temp.pop() << " ";
        }

        cout << endl;
    }



};


int main()
{
    Queue q1 ;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.enqueue(6);
    q1.enqueue(7);

    q1.display();

    q1.dequeue();
    q1.dequeue();
    q1.display();
}

