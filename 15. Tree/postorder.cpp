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

void postOrder(Node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->key << " ";
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
    postOrder(root);
}