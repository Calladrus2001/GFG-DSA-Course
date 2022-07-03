#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

void preOrder(Node *root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main()
{
    Node *root = new Node(10);
    Node *Lchild = new Node(20);
    Node *Rchild = new Node(30);
    Node *LLchild = new Node(40);
    root->left = Lchild;
    root->right = Rchild;
    Lchild->left = LLchild;
    preOrder(root);
}