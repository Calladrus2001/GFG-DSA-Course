#include <iostream>
using namespace std;

struct Node
{
    Node *left;
    Node *right;
    int key;

    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int main()
{
    Node *root = new Node(30);
    Node *Lchild = new Node(20);
    Node *Rchild = new Node(40);
    Node *LLchild = new Node(10);
    Node *LRchild = new Node(25);
    root->left = Lchild;
    root->right = Rchild;
    Lchild->left = LLchild;
    Lchild->right = LRchild;
}