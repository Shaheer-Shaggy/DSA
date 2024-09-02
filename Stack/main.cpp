#include <iostream>
#define MAX 100

using namespace std;

class Stack
{
    int top;
    int arr[MAX];

public:
    Stack()  
    {
        top = -1;
    }
    int getTop()
    {
        return top;
    }
    bool isEmpty()
    {
        if(top == -1)
           return true;
        return false ;
    }
    bool isFull()
    {
        if(top == MAX)
        {
            return true;
        }
        return false ;
    }
    void push(int num)
    {
        if (top < MAX - 1) // Check if there's space in the stack
        {
            top++;
            arr[top] = num;
        }
        else
        {
            cout << "Stack overflow! Cannot push " << num << ".\n";
            // You might want to handle this situation differently (e.g., throw an exception).
        }
    }

    int pop()
    {
        if(isEmpty())
        {
            return -1 ;
        }
        int x = arr[top--];
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

// int main()
// {
//     Stack stack;
//     stack.push(12);
//     stack.push(7);
//     stack.push(11);
//     stack.pop();
//     stack.push(17);
//     stack.pop();
//     stack.push(18);
//     stack.push(20);
//     stack.push(21);
//     stack.display();
    
// }
