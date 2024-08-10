#include <iostream>

using namespace std;


class Node {
public:
  int data;
  Node* next;
  Node(int data) 
  {
    this->data = data;
    this->next = nullptr;
  }
};

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
}

