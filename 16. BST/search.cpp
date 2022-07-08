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

bool search(Node *root, int x)
{
    if (root == NULL)
    {
        return false;
    }
    if (x < root->key)
    {
        cout << "lesser than " + root->key << endl;
        search(root->left, x);
    }
    else if (x > root->key)
    {
        cout << "greater than " + root->key << endl;
        search(root->right, x);
    }
    else {
        return true;
    }
}

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
    bool res = search(root, 26);
    cout << res << endl;
}