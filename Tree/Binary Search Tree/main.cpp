#include <iostream>

using namespace std;

class Tree 
{
    public:
    int data;
    Tree* left;
    Tree* right;
    
    Tree(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }

};

Tree* insert(Tree* root , int value)
{
    if(root == nullptr)
    {
        root = new Tree(value);
    }

if(root->data == value)
    {
        return root;
    }


    if(root->data < value)
    {
        root->right = insert(root->right, value);
    }
    else 
    {
        root->left = insert(root->left, value);
    }

    return root;

}

void inorder(Tree *root)
{
    if(root == nullptr) return;

    
}

int main()
{
    Tree* root = new Tree(10);
    root->left = new Tree(20);
    root->right = new Tree(30);
    root->left->left = new Tree(40);
    root->left->right = new Tree(50);
}