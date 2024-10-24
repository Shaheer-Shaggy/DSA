#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    int priority;
    Node *next;
    Node *prev;

    Node(int data, int priority) : data(data), priority(priority), next(nullptr), prev(nullptr) {}
    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};