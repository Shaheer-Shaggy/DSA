#ifndef _STACK_H
#define _STACK_H

#include <iostream>
#define MAX 100

using namespace std;

template <class T> 
class Stack
{
    int top;
    T arr[MAX];

    public:

    Stack()
    {
        top = -1 ;
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        return false;
    }

    bool isFull()
    {
        if (top == MAX)
        {
            return true;
        }
        return false;
    }

    void push(T data)
    {

        if (top < MAX - 1) // Check if there's space in the stack
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Stack overflow! Cannot push " << data << ".\n";
            
        }
    }

    T Top() 
    {
        return (arr[top]) ;
    }

    T pop()
    {
        if (isEmpty())
        {
            return -1;
        }
        T x = arr[top--];
        return x;
    }

    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

#endif