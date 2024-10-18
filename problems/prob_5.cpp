#include <iostream>
#include  "../Queue/Queue_using_linked_list/main.cpp"

using namespace std;

class VipQueue
{
    Queue normal;
    Queue vip;

    public:
    void enqueue(int value , bool isVip = false)
    {
        if(isVip)
            vip.enqueue(value);
        else
            normal.enqueue(value);
    }

    void dequeue()
    {
        if(!vip.isEmpty())
        {
            vip.dequeue();
        } else if ( !normal.isEmpty())
        {
            normal.dequeue();
        }
        else 
        {
            cout << "Queue is empty" << endl;
        }
    }

    int getFront()
    {
        if(!vip.isEmpty())
            return vip.getFront();
        else if (!normal.isEmpty())
            return normal.getFront();
        else
            return -1;
    }

    bool isEmpty()
    {
         return (vip.isEmpty() && normal.isEmpty());
    }

};


int main()
{
    int Priority[] = {5 , 7 ,11};
    int data[] = {1,2,3,4,5 ,6,7, 12,11 } ;
    
}