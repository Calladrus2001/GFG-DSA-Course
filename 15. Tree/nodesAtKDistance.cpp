#include <iostream>
#include <algorithm>
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

void printNodesAtKDistance(Node* root, int k){
    if (root == NULL){
        return ;
    }
    if (k == 0){
        cout << root->key << " ";
        return ;
    }
    else {
        printNodesAtKDistance(root->left, k-1);
        printNodesAtKDistance(root->right, k-1);
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
    printNodesAtKDistance(root, 1);
}