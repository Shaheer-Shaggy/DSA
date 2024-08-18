#include <iostream> 

using namespace std; 

class Tree {
    public :

    int data ;
    Tree* left ;
    Tree* right ;

    Tree(int data) 
    {
        this->data = data ;
        left = nullptr ;
        right = nullptr ;
    }
};

void preOrder_traverse(Tree *root) // Pre-order : Root, Left, Right
{
    if(root == nullptr) return ;

    cout << root->data << " ";
    preOrder_traverse(root->left);
    preOrder_traverse(root->right);

}

void inOrder_traverse(Tree *root) // In-order : Left, Root, Right
{
    if(root == nullptr) return ;
    
    inOrder_traverse(root->left);
    cout << root->data << " ";
    inOrder_traverse(root->right);
}

void postOrder_traverse(Tree *root) // Post-order : Left, Right, Root
{
    if(root == nullptr) return;

    cout << root->data <<" " ;
    postOrder_traverse(root->left);
    postOrder_traverse(root->right);
}
int main()
{

    // Initilize and allocate memory for tree 

    Tree *root = new Tree(1) ;
    Tree *firstNode = new Tree(2);
    Tree *secondNode = new Tree(3);
    Tree *thirdNode = new Tree(4);
    Tree *fourthNode = new Tree(5);


    // Connecting nodes on binary tree
    root->left = firstNode ;
    root->right = secondNode ;
    firstNode->left = thirdNode ;
    secondNode->right = fourthNode ;  //  for graphical representation see the BINARY_TREE.PNG file
    
    cout << "Pre Order " ; 
    preOrder_traverse(root) ;
    cout << endl;
    cout << "In Order ";
    inOrder_traverse(root) ;
    cout << endl;
    cout << "Post Order ";
    postOrder_traverse(root) ;
    cout << endl;

    return 0 ; 
}