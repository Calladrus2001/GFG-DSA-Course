#include<iostream>
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

int sizeOfBinTree(Node* root){
    if (root == NULL){
        return 0;
    }
    else {
        return 1 + sizeOfBinTree(root->left) + sizeOfBinTree(root->right);
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
    int size = sizeOfBinTree(root);
    cout << size << endl;
}