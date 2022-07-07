#include<iostream>
#include<algorithm>
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

int maxInBinaryTree(Node* root){
    if (root==NULL){
        return INT_MIN;
    }
    else {
        return max(root->key, max(maxInBinaryTree(root->left), maxInBinaryTree(root->right)));
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
    int res = maxInBinaryTree(root);
    cout << res << endl;
}